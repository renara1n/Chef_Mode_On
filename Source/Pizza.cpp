#include "Pizza.h"

Pizza::Pizza() : Food("Pizza") {

    addStep("Step 1",
        { "Prepare dough", "Cool cheese",
          "Add sauce", "Skip dough" }, 0);

    addStep("Step 2",
        { "Heat dough", "Let dough rise",
          "Cut dough", "Freeze dough" }, 1);

    addStep("Step 3",
        { "Wash cheese", "Prepare sauce",
          "Cut dough", "Skip sauce" }, 1);

    addStep("Step 4",
        { "Heat tray", "Check dough",
          "Cool plate", "Spread dough" }, 3);

    addStep("Step 5",
        { "Add cheese", "Remove dough",
          "Add sauce and toppings", "Cool pizza" }, 2);

    addStep("Step 6",
        { "Cool oven", "Bake pizza",
          "Cut dough", "Wash tray" }, 1);

    addStep("Step 7",
        { "Heat slice", "Slice and serve",
          "Cool pizza", "Bake again" }, 1);
}