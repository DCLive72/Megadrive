/**
 * Hello World Example
 * Created With Genesis-Code extension for Visual Studio Code
 * Use "Genesis Code: Compile" command to compile this program.
 **/
#include <genesis.h>

static void handleInput(void);

int main()
{
    JOY_init();
    VDP_drawText("Fidelin, programando la Megadrive", 7, 7);
    VDP_drawText("Ejemplo de control del pad", 7, 12);
    while(1)
    {
        handleInput();
        //For versions prior to SGDK 1.60 use VDP_waitVSync instead.
        SYS_doVBlankProcess();
    }
    return (0);
}

static void handleInput(void)
{
    int value = JOY_readJoypad(JOY_1);
    if(value & BUTTON_LEFT) 
    { 
        VDP_drawText("Izquierda", 7, 15); 
    }
    if(value & BUTTON_RIGHT) 
    { 
        VDP_drawText("Derecha", 7, 15); 
    }
}
