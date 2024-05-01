#define NOGDI

#define CloseWindow CloseWindow_
#include <raylib.h>
#undef CloseWindow

#include <iostream>
#include <deque>
#include <raymath.h>
#include <chrono>
#include <thread>



// остальной код

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

Color green = { 173,204,96,255 };
Color darkGreen = { 43,51,24,255 };

int cellSize = 30;
int cellCount = 25;
int offset = 75;


double lastUpdateTime = 0;
bool ElementInDeque(Vector2 element, deque<Vector2>deque) {
	for (unsigned int i = 0; i < deque.size(); ++i) {
		if (Vector2Equals(deque[i], element)) {
			return true;
		}
	}
	return false;
}
bool eventTriggered(double interval) {
	double currentTime = GetTime();
	if (currentTime - lastUpdateTime >= interval) {
		lastUpdateTime = currentTime;
		return true;
	}
	return false;
}

class Snake {
public:
	deque<Vector2>body = { Vector2{6,9},Vector2{5,9},Vector2{4,9} };
	Vector2 direction = { 1,0 };


	bool addSegment = false;

	void Draw() {
		for (unsigned int i = 0; i < body.size(); ++i) {
			float x = body[i].x;
			float y = body[i].y;
			Rectangle segment = Rectangle{ offset + x * cellSize,offset + y * cellSize,(float)cellSize,(float)cellSize };
			DrawRectangleRounded(segment, 0.5, 6, darkGreen);
			Image image = LoadImage("moshguyZmeya.png");
			Texture2D texture = LoadTextureFromImage(image);
			Vector2 pos = { x, y };
			UnloadImage(image);
			DrawTexture(texture, offset + x * cellSize, offset + y * cellSize, WHITE);



		}
	}

	void Update() {

		body.push_front(Vector2Add(body[0], direction));
		if (addSegment == true)
		{
			addSegment = false;
		}
		else
		{
			body.pop_back();
		}

	}
	void Reset()
	{
		body = { Vector2{6,9},Vector2{5,9},Vector2{4,9} };
		direction = { 1,0 };
	}
};
class Food {
public:
	Vector2 position;
	Texture2D texture;

	Food(deque<Vector2> snakeBody) {
		Image image = LoadImage("gavno.png");
		texture = LoadTextureFromImage(image);
		UnloadImage(image);
		position = GenerateRandomPos(snakeBody);
	}
	~Food() {
		UnloadTexture(texture);
	}
	void Draw() {
		DrawTexture(texture, offset + position.x * cellSize, offset + position.y * cellSize, WHITE);
	}

	Vector2 GenerateRandomCell() {
		float x = GetRandomValue(0, cellCount - 1);
		float y = GetRandomValue(0, cellCount - 1);
		return Vector2{ x,y };
	}

	Vector2 GenerateRandomPos(deque<Vector2> snakeBody) {

		Vector2 position = GenerateRandomCell();
		while (ElementInDeque(position, snakeBody)) {
			position = GenerateRandomCell();
		}
		return position;
	}
};

class Game {
public:

	Snake snake = Snake();
	Food food = Food(snake.body);
	bool running = true;
	int score = 5;
	Sound eatSound1;
	Sound eatSound2;
	Sound eatSound3;
	Sound wallSound;
	Sound ebatZdaroviy;
	Sound viruli;
	Sound klas;
	Sound nehuy;
	int counter = 0;
	bool took = true;
	Game() {
		InitAudioDevice();
		nehuy = LoadSound("nehuy delaty.mp3");
		klas = LoadSound("klaaas.mp3");
		viruli = LoadSound("viruli.mp3");
		ebatZdaroviy = LoadSound("AgromniySUKA.mp3");
		eatSound1 = LoadSound("zaebis.mp3");
		eatSound2 = LoadSound("dujezaebis.mp3");
		eatSound3 = LoadSound("naiskatayu.mp3");
		wallSound = LoadSound("dujehuyoviy.mp3");
	}
	~Game() {
		UnloadSound(nehuy);
		UnloadSound(klas);
		UnloadSound(viruli);
		UnloadSound(wallSound);
		UnloadSound(eatSound1);
		UnloadSound(eatSound2);
		UnloadSound(wallSound);
		UnloadSound(ebatZdaroviy);
		CloseAudioDevice;
	}
	void Start() {
		PlaySound(viruli);
	}
	void Draw() {
		if (score == 25) PlaySound(nehuy);
		if (score % 10 == 0) PlaySound(ebatZdaroviy);
		food.Draw();
		snake.Draw();
	}
	void Update() {

		if (running) {
			snake.Update();
			checkCollisionWithEdges();
			checkCollisionWithFood();
			CheckCollisionWithTail();
		}
		counter++;
	}

	void checkCollisionWithFood()
	{
		int number;
		if (counter > 30 && took) {
			PlaySound(eatSound3);
			counter = 0;
			took = false;
		}
		if (Vector2Equals(snake.body[0], food.position)) {


			number = rand() % 3;
			food.position = food.GenerateRandomPos(snake.body);
			snake.addSegment = true;
			score += 5;
			if (number == 0)PlaySound(eatSound1);
			else if (number == 1) PlaySound(eatSound2);
			else if (number == 2) PlaySound(klas);
			counter = 0;
			took = true;
		}

	}

	void checkCollisionWithEdges() {
		if (snake.body[0].x == cellCount || snake.body[0].x == -1)
		{
			GameOver();
		}
		if (snake.body[0].y == cellCount || snake.body[0].y == -1)
		{
			GameOver();
		}
	}
	void GameOver()
	{
		snake.Reset();
		food.position = food.GenerateRandomPos(snake.body);
		running = false;
		score = 0;
		PlaySound(wallSound);
	}
	void CheckCollisionWithTail()
	{
		deque<Vector2> headlessBody = snake.body;
		headlessBody.pop_front();
		if (ElementInDeque(snake.body[0], headlessBody))
		{
			GameOver();
		}
	}
};

int main() {

	srand(time(NULL));

	cout << "Starting the game..." << endl;
	InitWindow(2 * offset + cellSize * cellCount, 2 * offset + cellSize * cellCount, "Retro Snake");
	SetTargetFPS(60);
	Game game = Game();
	game.Start();
	while (WindowShouldClose() == false) {
		BeginDrawing();


		if (eventTriggered(0.2))
		{
			game.Update();
		}

		if (IsKeyPressed(KEY_UP) && game.snake.direction.y != 1)
		{
			game.snake.direction = { 0,-1 };
			game.running = true;
		}
		if (IsKeyPressed(KEY_DOWN) && game.snake.direction.y != -1)
		{
			game.snake.direction = { 0,1 };
			game.running = true;
		}
		if (IsKeyPressed(KEY_LEFT) && game.snake.direction.x != 1)
		{
			game.snake.direction = { -1,0 };
			game.running = true;
		}
		if (IsKeyPressed(KEY_RIGHT) && game.snake.direction.x != -1)
		{
			game.snake.direction = { 1,0 };
			game.running = true;
		}


		//drawing
		ClearBackground(green);
		DrawRectangleLinesEx(Rectangle{ (float)offset - 5,(float)offset - 5,(float)cellSize * cellCount + 10,(float)cellSize * cellCount + 10 }, 5, darkGreen);

		DrawText("SIGMAR EBASHER GAME", offset - 5, 20, 40, darkGreen);
		DrawText("Score:", offset - 50, offset + cellSize * cellCount + 10, 40, darkGreen);
		DrawText(TextFormat("%i", game.score), offset + 100, offset + cellSize * cellCount + 13, 40, darkGreen);

		game.Draw();
		EndDrawing();
	}
	// CloseWindow_();

}