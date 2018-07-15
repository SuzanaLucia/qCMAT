//include the UI and main application
#include "dummyFeat.h"


dummyFeat::dummyFeat(QWidget* parent, ccMainAppInterface* app)
	: QDialog(parent, Qt::Tool)
	, Ui::dummyFeat()
{
	//important for Qt
	setupUi(this);
	
	//Connect Qobjects to appropriate functions
	//connect( QObjectClassName , SIGNAL( clicked() ), this, SLOT( functionToBeTriggered()));

	//initialize main application interface
	m_app = app;
	helloWorld();
}


void dummyFeat::helloWorld(){
	//display Hello World! to CC console
	m_app->dispToConsole("Hello, World!");
}


dummyFeat::~dummyFeat()
{
}