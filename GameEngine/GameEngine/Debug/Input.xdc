<?xml version="1.0"?><doc>
<members>
<member name="T:Input" decl="false" source="E:\Game-Engine\implementation-petrut123\GameEngine\GameEngine\Input.h" line="6">
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
</members>
</doc>