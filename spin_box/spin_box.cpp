#include "spin_box.h"

SpinBox::SpinBox(QWidget *parent) :
    QSpinBox(parent)
{
}

void SpinBox::set_value_name(QString name){
  _value_name = name;
}

QString SpinBox::get_value_name() const{
  return _value_name;
}

void SpinBox::set_value_type(ValueType type){
  _value_type = type;
}

SpinBox::ValueType SpinBox::get_value_type() const{
  return _value_type;
}
