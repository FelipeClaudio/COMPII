/*Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2016/2
Prof. Marcelo Luiz Drumond Lanza
Autor: Felipe Claudio da Silva Santos

$Author$
$Date$
$Log$
*/ 

#include "fcssUmlUserInterface.h"

char *fcssUmlCliUserInterfaceMessages [fcssUmlLanguagesAmount][ERROR_AMOUNT] = 
{
	{
		"OK",
	},
	{
		"Sucesso",
	}
};

char *fcssUmlNcursesUserInterfaceMessages [fcssUmlLanguagesAmount][ERROR_AMOUNT] = 
{
	{
		"OK",
	},
	{
		"Sucesso",
	}
};

char *fcssUmlCgiUserInterfaceMessages [fcssUmlLanguagesAmount][ERROR_AMOUNT] = 
{
	{
		"OK",
	},
	{
		"Sucesso",
	}
};

char *
FcssUmlGetCliUserInterfaceMessage (fcssUmlUserInterfaceMessageNumberType message, fcssUmlLanguageType language)
{
	return (fcssUmlCliUserInterfaceMessages[(unsigned) language][(unsigned) message]);
}

char *
FcssUmlGetNcursesUserInterfaceMessage (fcssUmlUserInterfaceMessageNumberType message, fcssUmlLanguageType language)
{
	return (fcssUmlNcursesUserInterfaceMessages[(unsigned) language][(unsigned)message]);
}

char *
FcssUmlGetWebUserInterfaceMessage (fcssUmlUserInterfaceMessageNumberType message, fcssUmlLanguageType language)
{
	return (fcssUmlCgiUserInterfaceMessages[(unsigned) language][(unsigned)message]);
}

/* $RCSfile$ */