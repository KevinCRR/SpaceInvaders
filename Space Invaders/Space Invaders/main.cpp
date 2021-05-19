#include <iostream>
#include "math.h"
#include "console.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int width = 100;
int height = 100;

using namespace  std;


void main()
{
	Console  c;
	vec2 sizes(20, 20);
	c.Initialize(sizes, "title");
	vec2 position(3, 1);
	while (true)
	{
		c.Clear();
		c.Print("*-*|-|*-*", vec2(2,2), vec2(3,3), FG_WHITE);
		c.Draw();
	}

	system("pause");
}