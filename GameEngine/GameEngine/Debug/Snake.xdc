<?xml version="1.0"?><doc>
<members>
<member name="T:Input" decl="false" source="E:\Game-Engine\implementation-petrut123\GameEngine\Libraries\SFML-2.5.1\include\SFML\Graphics.hpp" line="64">
\defgroup graphics Graphics module

2D graphics module: sprites, text, shapes, ...

<summary>
Input management class
</summary>
</member>
<member name="M:Input.GetButtonState(sf.Keyboard.Key)" decl="true" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Input.h" line="13">
<summary>
Checks a button's state.
</summary>
<param name="button">The enumeration value of the checked button</param>
<returns>Returns true every frame the button is pressed and false every frame the button is not pressed</returns>
</member>
<member name="M:Input.GetMouseButtonState(sf.Mouse.Button)" decl="true" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Input.h" line="19">
<summary>
Checks a mouse button's state.
</summary>
<param name="button">The enumeration value of the checked button</param>
<returns>Return true every frame the mouse button is pressed and false every frame the mouse button is not pressed</returns>
</member>
<member name="M:Input.GetButtonDown(sf.Keyboard.Key)" decl="true" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Input.h" line="25">
<summary>
Checks if a button was pressed in the frame it was called.
</summary>
<param name="button">Pressed button</param>
<param name="window"></param>
<returns>True the frame the button was pressed, false otherwise</returns>
</member>
<member name="M:Input.GetMouseButtonUp(sf.Mouse.Button,sf.RenderWindow*)" decl="true" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Input.h" line="32">
<summary>
Checks if the mouse button was released this frame or not.
</summary>
<param name="button">Pressed mouse button</param>
<param name="window"></param>
<returns>True the frame the button was released, false otherwise</returns>
</member>
<member name="M:Input.GetButtonUp(sf.Keyboard.Key,sf.RenderWindow*)" decl="true" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Input.h" line="39">
<summary>
Checks if the button was released this frame or not.
</summary>
<param name="button">Pressed button</param>
<param name="window"></param>
<returns>True the frame the button was released, false otherwise</returns>
</member>
<member name="M:Input.UpdateKeyMap(sf.Keyboard.Key,System.Boolean)" decl="true" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Input.h" line="46">
<summary>
Updates the key map with the given state
</summary>
<param name="button">The button that has its state changed</param>
<param name="state">Bool that represents the state of the given button</param>
</member>
<member name="F:Input.keysByState" decl="false" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Input.h" line="54">
<summary>
Holds all the buttons in the SFML Key enumeration 
True indicates the key has been released, false the key is still pressed
</summary>
</member>
<member name="T:Random" decl="false" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Random.h" line="4">
<summary>
Class that it's used to generate random numbers
</summary>
</member>
<member name="M:Random.RandomNumberInRange(System.Int32,System.Int32)" decl="true" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Random.h" line="10">
<summary>
Generate a random integer in the given range
</summary>
<param name="min">The maximum number allowed (included)</param>
<param name="max">The minimum number allowed (included</param>
<returns></returns>
</member>
<member name="T:SnakeFood" decl="false" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\SnakeFood.h" line="5">
<summary>
Struct that represents the food eaten by the snake
</summary>
</member>
<member name="M:SnakeFood.SetLocation" decl="true" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\SnakeFood.h" line="12">
<summary>
Sets the foods location to a random location on the screen
</summary>
</member>
<member name="F:SnakeFood.sprite" decl="false" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\SnakeFood.h" line="16">
<summary>
The sprite to be drawn
</summary>
</member>
<member name="F:SnakeFood.texture" decl="false" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\SnakeFood.h" line="21">
<summary>
The texture used to create the sprite
</summary>
</member>
<member name="M:Snake.Start" decl="true" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Snake.h" line="11">
<summary>
The first function that gets called after the snake is created
</summary>
</member>
<member name="M:Snake.Update(sf.RenderWindow*)" decl="true" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Snake.h" line="15">
<summary>
The update loop called once a frame
</summary>
<param name="window">A pointer to the render window</param>
</member>
<member name="F:Snake.sprite" decl="false" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Snake.h" line="20">
<summary>
The sprite that represents the head of the snake
</summary>
</member>
<member name="F:Snake.texture" decl="false" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Snake.h" line="25">
<summary>
The texture used to create the head and the tail sprites
</summary>
</member>
<member name="F:Snake.food" decl="false" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Snake.h" line="29">
<summary>
A Snake food object
</summary>
</member>
<member name="F:Snake.tail" decl="false" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Snake.h" line="33">
<summary>
A list of sprites representing the snakes tail
</summary>
</member>
<member name="F:Snake.xDirection" decl="false" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Snake.h" line="37">
<summary>
The x,y movement direction of the snake
</summary>
</member>
<member name="F:Snake.snakeSpeed" decl="false" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Snake.h" line="41">
<summary>
The speed at which the snake is moving
</summary>
</member>
<member name="M:Snake.Move" decl="true" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Snake.h" line="45">
<summary>
Move the snake in the x,y direction
</summary>
</member>
<member name="M:Snake.SetDirection(System.Int32,System.Int32)" decl="true" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Snake.h" line="49">
<summary>
Set the snakes x, y movement direction with the given parameters
</summary>
<param name="x">Given x direction</param>
<param name="y">Given y direction</param>
</member>
<member name="M:Snake.Eat" decl="true" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Snake.h" line="55">
<summary>
This function gets called when the snake eats food
Adds one more to the tails length and changes the foods position
</summary>
</member>
<member name="M:Snake.Draw(sf.RenderWindow*)" decl="true" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Snake.h" line="60">
<summary>
Draw the snake
</summary>
<param name="window">The window is being drawn to</param>
</member>
<member name="M:Snake.CheckDeath" decl="true" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Snake.h" line="65">
<summary>
Check if the snake died
</summary>
<returns>True if the snake touched its tail false otherwise</returns>
</member>
<member name="M:Snake.ResetSnake" decl="true" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Snake.h" line="70">
<summary>
Reset the snake
</summary>
</member>
<member name="M:Snake.HandleSnakeOutsideMap" decl="true" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Snake.h" line="74">
<summary>
This method handles the situation where the snake gets outside of the playing area
</summary>
</member>
</members>
</doc>