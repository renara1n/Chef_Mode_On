#include "Burger.h"

Burger::Burger() : Food("Burger") {

    addStep("Step 1",
        { "Wash lettuce", "Prepare patty",
          "Freeze buns", "Burn cheese" }, 1);

    addStep("Step 2",
        { "Boil ketchup", "Season patty",
          "Freeze grill", "Eat raw bun" }, 1);

    addStep("Step 3",
        { "Burn cheese", "Eat raw salt",
          "Freeze grill", "Season patty" }, 3);

    addStep("Step 4",
        { "Freeze patty raw", "Grill patty",
          "Boil bread", "Fry buns" }, 1);

    addStep("Step 5",
        { "Toast buns", "Burn ketchup",
          "Freeze lettuce", "Eat raw bun dough" }, 0);

    addStep("Step 6",
        { "Burn vegetables", "Add toppings",
          "Freeze burger", "Skip assembly" }, 1);

    addStep("Step 7",
        { "Re-cook burger", "Assemble and serve",
          "Disassemble", "Freeze finished burger" }, 1);
}