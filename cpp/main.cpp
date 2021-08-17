#include <iostream>

class Pastry
{
public:
  // Skeleton of the process
  void bake_me_baby()
  {
    prepare_dough();
    preheat_oven();
    add_sauce();
    add_toppings();
    bake();
  }

protected:
  // Subclasses have to implement these methods
  virtual void prepare_dough() = 0;
  virtual void add_sauce() = 0;
  virtual void add_toppings() = 0;
  virtual void bake() = 0;

  // Subclasses can override the methods or leave them be
  virtual void preheat_oven()
  {
    std::cout << "Preheating the oven" << std::endl;
  }
  virtual void cut()
  {
    std::cout << "Cutting" << std::endl;
  }
};

class Pizza : public Pastry
{
protected:
  /**
   * 0: raw
   * 1: dough prepared
   * 2: sauce added
   * 3: toppings added
   * 4: baked
   **/
  int state = 0;

protected:
  void prepare_dough()
  {
    std::cout << "Preparing the dough" << std::endl;
    state = 1;
  }
  void add_sauce()
  {
    std::cout << "Adding the sauce" << std::endl;
    state = 2;
  }
  void add_toppings()
  {
    std::cout << "Adding toppings" << std::endl;
    state = 3;
  }
  void bake()
  {
    std::cout << "Baking" << std::endl;
    state = 4;
  }
};

int main(int argc, char **argv)
{
  Pizza *pizza = new Pizza();
  pizza->bake_me_baby();
  delete pizza;
  return 0;
  /*
  Preparing the dough
  Preheating the oven
  Adding the sauce
  Adding toppings
  Baking
  */
}
