#include "Burger.h"

Burger::Burger() : Food("Burger") {

    addStep("Step 1",
        { "Wash lettuce", "Prepare patty",
          "Cool cheese", "Wash tray" }, 1);

    addStep("Step 2",
        { "Add sauce", "Season patty",
          "Heat buns", "Wash pan" }, 1);

    addStep("Step 3",
        { "Check cheese", "Wash grill",
          "Cool buns", "Season patty" }, 3);

    addStep("Step 4",
        { "Toast bread", "Grill patty",
          "Add sauce", "Heat cheese" }, 1);

    addStep("Step 5",
        { "Toast buns", "Cool tray",
          "Cut lettuce", "Wash buns" }, 0);

    addStep("Step 6",
        { "Heat plate", "Add toppings",
          "Cool burger", "Skip stack" }, 1);

    addStep("Step 7",
        { "Cut burger", "Assemble and serve",
          "Heat again", "Wash tray" }, 1);
}