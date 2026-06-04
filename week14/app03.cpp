#include "invoice.h"

int main()
{
  // Product 객체 인스턴스화
  Product product1("Monitor", 150000);
  Product product2("Keyboard", 70000);

  // Invoice 객체를 인스턴스화하고 Product 객체를 사용해 출력
  Invoice invoice(1001);
  invoice.add(2, product1); // dependency
  invoice.add(5, product2); // dependency
  invoice.print();

  return 0;
}