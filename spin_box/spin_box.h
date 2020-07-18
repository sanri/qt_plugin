#pragma once

#include <QSpinBox>

class SpinBox : public QSpinBox
{
  Q_OBJECT
  Q_PROPERTY(QString value_name READ get_value_name WRITE set_value_name)
  Q_PROPERTY(ValueType value_type READ get_value_type WRITE set_value_type)

public:
  enum class ValueType{
    i16,
    u16,
    i32,
    u32,
  };
  Q_ENUM(ValueType)

public:
  SpinBox(QWidget *parent = 0);

  QString get_value_name()const;
  void set_value_name(QString name);

  ValueType get_value_type()const;
  void set_value_type(ValueType type);

private:
  QString _value_name;
  ValueType _value_type = ValueType::u16;
};

