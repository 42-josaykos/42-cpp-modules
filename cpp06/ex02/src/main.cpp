#include <cstdlib>
#include <ctime>
#include <iostream>

class Base {
public:
  virtual ~Base(void){};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base* generate(void) {
  int nb = std::rand() % 3;

  switch (nb) {
  case 0:
    return new A;
    break;
  case 1:
    return new B;
    break;
  default:
    return new C;
  }
}

// dynamic_cast returns a NULL pointer if it fails
void identify(Base* p) {
  if (dynamic_cast<A*>(p)) {
    std::cout << "A" << std::endl;
  } else if (dynamic_cast<B*>(p)) {
    std::cout << "B" << std::endl;
  } else if (dynamic_cast<C*>(p)) {
    std::cout << "C" << std::endl;
  }
  return;
}

void identify(Base& p) {
  // identify(&p);
  if (dynamic_cast<A*>(&p)) {
    std::cout << "A" << std::endl;
  } else if (dynamic_cast<B*>(&p)) {
    std::cout << "B" << std::endl;
  } else if (dynamic_cast<C*>(&p)) {
    std::cout << "C" << std::endl;
  }
  return;
}

int main(void) {

  std::srand(std::time(0));

  Base* p1 = generate();
  Base* p2 = generate();
  Base* p3 = generate();

  std::cout << "--- identify from pointer as param ---" << std::endl;
  std::cout << "  p1: ";
  identify(p1);
  std::cout << "  p2: ";
  identify(p2);
  std::cout << "  p3: ";
  identify(p3);

  std::cout << std::endl
            << "--- identify from reference as param ---" << std::endl;
  std::cout << "  p1: ";
  identify(*p1);
  std::cout << "  p2: ";
  identify(*p2);
  std::cout << "  p3: ";
  identify(*p3);

  delete p1;
  delete p2;
  delete p3;

  return 0;
}