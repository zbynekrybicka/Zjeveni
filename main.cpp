#include <iostream>

#include "buh.h"
#include "jezis.h"
#include "jan.h"

using namespace std;

int main() {
    /* 
     * Zjevení 1:1
     *
     * Zjevení Ježíše Krista, 
     * které mu dal Bůh, 
     * aby svým otrokům ukázal, co se má brzy stát. 
     * On to prostřednictvím svého anděla naznačil svému otroku Janovi.
     */
        Buh *buh = Buh::entita();

        // Zjevení Ježíše Krista, které mu dal Bůh
        Jezis *jezis = buh->jezis();
        buh->davaZjeveni(jezis);

        // On [Ježíš] to prostřednictvím svého anděla naznačil svému otroku Janovi.
        jezis->vyvoleniJana();
        Jan *jan = jezis->jan();
        jezis->davaZjeveniSkrzeAndela(jan);

    /* Zjevení 1:2 Ten [Jan] dosvědčil Boží slovo a svědectví Ježíše Krista, vše, co uviděl. */
        cout << jan->dosvedcuje();

    return 0;
}