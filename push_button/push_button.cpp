#include "push_button.h"

PushButton::PushButton(QWidget *parent) :
    QPushButton(parent)
{
}

QString PushButton::get_value_name() const{
    return _value_name;
}

void PushButton::set_value_name(QString name){
    _value_name = name;
}

PushButton::ValueType PushButton::get_value_type() const{
    return _value_type;
}

void PushButton::set_value_type(ValueType type){
    _value_type = type;
}
