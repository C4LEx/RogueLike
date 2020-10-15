#include "framework.h"
#include "playermanager.h"

Framework::Framework()
{
	
}

void Framework::gettingStarted()
{
	Playermanager playermanager;
	playermanager.nameInput();
	playermanager.classInput();
	playermanager.generatePlayer();
	playermanager.startItems();
	//playermanager.updatePlayer();
}
