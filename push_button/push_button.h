#pragma once

#include <QPushButton>

class PushButton : public QPushButton
{
  Q_OBJECT
  Q_PROPERTY(QString value_name_enable READ get_value_name_enable WRITE set_value_name_enable)
  Q_PROPERTY(QString value_name_write READ get_value_name_write WRITE set_value_name_write)
  Q_PROPERTY(ValueType value_type READ get_value_type WRITE set_value_type)

public:
  enum ValueType{
    bit,
    u16,
  };
  Q_ENUM(ValueType)

public:
  PushButton(QWidget *parent = 0);

  QString get_value_name_write()const;
  void set_value_name_write(QString name);

  QString get_value_name_enable()const;
  void set_value_name_enable(QString name);

  ValueType get_value_type()const;
  void set_value_type(ValueType type);

private:
  QString _value_name_write;
  QString _value_name_enable;
  ValueType _value_type = ValueType::u16;
};

