#include <iostream>
#include <string>

class Pastry
{
public:
  virtual void bake_me_baby()
  {
    prepare_dough();
    add_sauce();
    add_toppings();
    bake();
  }

protected:
  virtual void prepare_dough() = 0;
  virtual void add_sauce() = 0;
  virtual void add_toppings() = 0;
  virtual void bake() = 0;
};

class Pizza : public Pastry
{
protected:
  int time = 0;
  std::string state = "Raw";

protected:
  void prepare_dough()
  {
    time = 1;
    state = "Prepared dough";
  }
  void add_sauce()
  {
    time = 2;
    state = "Added sauce";
  }
  void add_toppings()
  {
    time = 3;
    state = "Added toppings";
  }
  void bake()
  {
    time = 4;
    state = "Baked the hell out of this";
  }

public:
  void bake_me_baby()
  {
    prepare_dough();
    std::cout << time << " " << state << std::endl;
    add_sauce();
    std::cout << time << " " << state << std::endl;
    add_toppings();
    std::cout << time << " " << state << std::endl;
    bake();
    std::cout << time << " " << state << std::endl;
  }
};

int main(int argc, char **argv)
{
  Pastry *pizza = new Pizza();
  pizza->bake_me_baby();
  delete pizza;
  return 0;
}
