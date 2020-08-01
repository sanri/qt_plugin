#include "push_button.h"

PushButton::PushButton(QWidget *parent) :
    QPushButton(parent)
{
}

QString PushButton::get_value_name_write() const{
    return _value_name_write;
}

void PushButton::set_value_name_write(QString name){
    _value_name_write = name;
}

QString PushButton::get_value_name_enable() const{
    return _value_name_enable;
}

void PushButton::set_value_name_enable(QString name){
    _value_name_enable = name;
}

PushButton::ValueType PushButton::get_value_type() const{
    return _value_type;
}

void PushButton::set_value_type(ValueType type){
    _value_type = type;
}
