#include <stdio.h>
#include <ctype.h>

int main(void){
  const double price_artichokes = 2.05;
  const double price_beets = 1.15;
  const double price_carrots = 1.09;
  const double DISCOUNT = 0.05;
  const double under5 = 6.50;
  const double under20 = 14.00;
  const double base20 = 14.00;
  const double extralb = 0.50;

  char ch;
  // lb is abbreviation of pound
  double lb_artichokes = 0;
  double lb_beets = 0;
  double lb_carrots = 0;
  // lb_temp is used for multiple choose
  double lb_temp;
  double lb_total;

  double cost_artichokes;
  double cost_beets;
  double cost_carrots;
  double cost_total;
  double cost_final;
  double discount;
  double shipping;
  printf("Which vegetable you want to buy? \n");
  printf("a)Jerusalem Artichoke     b)Beet\n");
  printf("c)Carrot                  q)Exit\n");
  while((ch = getchar()) != 'q' && ch != 'Q')
  {
    if(ch == '\n')
      continue;
    while(getchar() != '\n')
      continue;
    ch = tolower(ch);
    switch(ch)
    {
      case 'a':
        printf("Enter pounds of Jerusalem Artichoke: ");
        scanf("%lf", &lb_temp);
        lb_artichokes += lb_temp;
        break;
      case 'b':
        printf("Enter pounds of Beet: ");
        scanf("%lf", &lb_temp);
        lb_beets += lb_temp;
        break;
      case 'c':
        printf("Enter pounds of Carrot: ");
        scanf("%lf", &lb_temp);
        lb_carrots += lb_temp;
        break;
      case 'd':
        printf("Bye!\n");
        return 0;
      default:
        printf("%c is not a valid choice\n", ch);
    }
    printf("a)Jerusalem Artichoke     b)Beet\n");
    printf("c)Carrot                  q)Exit\n");
  }

  cost_artichokes = price_artichokes * lb_artichokes;
  cost_beets = price_beets * lb_beets;
  cost_carrots = price_carrots * lb_carrots;
  cost_total = cost_artichokes + cost_beets + cost_carrots;
  
  lb_total = lb_artichokes + lb_beets + lb_carrots;
  if(lb_total <= 0)
    shipping = 0.0;
  else if(lb_total < 5.0)
    shipping = under5;
  else if(lb_total < 20)
    shipping = under20;
  else
    shipping = base20 + extralb * lb_total;

  if(cost_total > 100.0)
    discount = DISCOUNT * cost_total;
  else
    discount = 0.0;
  cost_final = cost_total + shipping - discount;

  printf("Your order:\n");
  printf("%.2f lbs of artichokes at $%.2f per pound:$ %.2f\n",
  lb_artichokes, price_artichokes, cost_artichokes);
  printf("%.2f lbs of beets at $%.2f per pound: $%.2f\n",
  lb_beets, price_beets, cost_beets);
  printf("%.2f lbs of carrots at $%.2f per pound: $%.2f\n",
  lb_carrots, price_carrots, cost_carrots);
  printf("Total cost of vegetables: $%.2f\n", cost_total);
  if (cost_total > 100)
  printf("Volume discount: $%.2f\n", discount);
  printf("Shipping: $%.2f\n", shipping);
  printf("Toal charges: $%.2f\n", cost_final); 
  return 0;
}
