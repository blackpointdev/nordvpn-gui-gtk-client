#include "helloworld.h"
#include <iostream>

HelloWorld::HelloWorld() : m_button("Hello Word!")
{
    set_title("Hello World!");
    m_button.signal_clicked().connect(sigc::mem_fun(*this, &HelloWorld::on_button_clicked));
    set_child(m_button);
    m_button.show();
}

HelloWorld::~HelloWorld()
{
}

void HelloWorld::on_button_clicked()
{
  std::cout << "Hello World" << std::endl;
}