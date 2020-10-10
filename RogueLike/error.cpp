#include "error.h";

Error::Error()
{

}

void Error::printOutError(int error)
{
	if (error == 1)
		std::cout << "Geben Sie bitte eine korrekten Input ein!" << std::endl;
}