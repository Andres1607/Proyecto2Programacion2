#include "Manejo.h"

Reproductor* Manejo::crearReproductor()
{
    string modelo = "";
    cout << "Componente: Unidad CD" << '\t' << "Modelo: DF531" << '\t' << "Precio: 100,00 " << endl;
    cout << "Componente: Unidad CD" << '\t' << "Modelo: MT909" << '\t' << "Precio: 150,00 " << endl;
    cout << "Componente: Unidad CD" << '\t' << "Modelo: CE230" << '\t' << "Precio: 175,00 " << endl;
    cout << "Componente: Unidad CD" << '\t' << "Modelo: YF292" << '\t' << "Precio: 200,00 " << endl;
    cout << "Componente: Tornamesa" << '\t' << "Modelo: FF211" << '\t' << "Precio: 180,00 " << endl;
    cout << "Componente: Tornamesa" << '\t' << "Modelo: HA401" << '\t' << "Precio: 230,00 " << endl;
    cout << "Componente: Tornamesa" << '\t' << "Modelo: EG266" << '\t' << "Precio: 320,00 " << endl;
    cout << "Componente: Radio" << '\t' << "Modelo: NW671" << '\t' << "Precio: 90,00  " << endl;
    cout << "Componente: Radio" << '\t' << "Modelo: JU272" << '\t' << "Precio: 300,00  " << endl;
    cout << "Componente: Radio" << '\t' << "Modelo: OE214" << '\t' << "Precio: 220,00 " << endl;
    cout << "Componente: Radio" << '\t' << "Modelo: LZ248" << '\t' << "Precio: 280,00  " << endl;
    cout << "Componente: Unidad Bluetooth" << '\t' << "Modelo: YM396" << '\t' << "Precio: 70,00  " << endl;
    cout << "Componente: Unidad Bluetooth" << '\t' << "Modelo: CE169" << '\t' << "Precio: 100,00  " << endl;
    cout << "Componente: Unidad Bluetooth" << '\t' << "Modelo: HN871" << '\t' << "Precio: 90,00  " << endl;
    cout << "Componente: Micrófono" << '\t' << "Modelo: GX610" << '\t' << "Precio: 90,00   " << endl;
    cout << "Componente: Micrófono" << '\t' << "Modelo: HE601" << '\t' << "Precio: 95,00   " << endl;
    cout << "Componente: Micrófono" << '\t' << "Modelo: EO222" << '\t' << "Precio: 120,00   " << endl;
    cout << "Componente: Micrófono" << '\t' << "Modelo: IS308" << '\t' << "Precio: 180,00  " << endl;
    cout << "Componente: Micrófono" << '\t' << "Modelo: UK405" << '\t' << "Precio: 100,00   " << endl;
    cout << "Selccione un modelo de reproductor: ";
    cin >> modelo;

    if (modelo == "DF531") return new Reproductor("Unidad CD", modelo, "Unidad básica", 100.00);

    if (modelo == "MT909") return new Reproductor("Unidad CD", modelo, "Protección de salto", 150.00);

    if (modelo == "CE230") return new Reproductor("Unidad CD", modelo, "Múltiples velocidades", 175.00);

    if (modelo == "YF292") return new Reproductor("Unidad CD", modelo, "Soporte SACD", 200.00);

    if (modelo == "FF211") return new Reproductor("Tornamesa", modelo, "Unidad básica 33/45 RPM", 180.00);

    if (modelo == "HA401")  return new Reproductor("Tornamesa", modelo, "Soporte 78 RPM", 230.00);

    if (modelo == "EG266") return new Reproductor("Tornamesa", modelo, "Brazo automático", 320.00);

    if (modelo == "NW671")  return new Reproductor("Radio", modelo, "Basico AM/FM", 90.00);

    if (modelo == "JU272") return new Reproductor("Radio", modelo, "Onda corta", 300.00);

    if (modelo == "OE214") return new Reproductor("Radio", modelo, "Sintonizador automático", 220.00);

    if (modelo == "LZ248") return new Reproductor("Radio", modelo, "Sintonizador programable", 280.00);

    if (modelo == "YM396") return new Reproductor("Unidad Bluetooth", modelo, "Basico", 70.00);

    if (modelo == "CE169") return new Reproductor("Unidad Bluetooth", modelo, "Multicanal", 100.00);

    if (modelo == "HN871") return new Reproductor("Unidad Bluetooth", modelo, "Receptor FM", 90.00);

    if (modelo == "GX610") return new Reproductor("Micrófono", modelo, "Alámbrico", 90.00);

    if (modelo == "HE601") return new Reproductor("Micrófono", modelo, "Alámbrico omnidireccional", 95.00);

    if (modelo == "EO222") return new Reproductor("Micrófono", modelo, "Inalámbrico", 120.00);

    if (modelo == "IS308") return new Reproductor("Micrófono", modelo, "Inalámbrico rango ampliado", 180.00);

    if (modelo == "UK405") return new Reproductor("Micrófono", modelo, "Inalámbrico Bluetooth", 100.00);

    return NULL;
}

Procesador* Manejo::crearProcesador()
{
    string modelo = "";
    cout << "Componente: Amplificador" << '\t' << "Modelo: CA188" << '\t' << "Precio: 115,00  " << endl;
    cout << "Componente: Amplificador" << '\t' << "Modelo: SK956" << '\t' << "Precio: 115,00  " << endl;
    cout << "Componente: Amplificador" << '\t' << "Modelo: JV322" << '\t' << "Precio: 140,00  " << endl;
    cout << "Componente: Amplificador" << '\t' << "Modelo: UI569" << '\t' << "Precio: 165,00 " << endl;
    cout << "Componente: Amplificador" << '\t' << "Modelo: YV439" << '\t' << "Precio: 190,00  " << endl;
    cout << "Componente: Mezclador" << '\t' << "Modelo: JC327" << '\t' << "Precio: 70,00 " << endl;
    cout << "Componente: Mezclador" << '\t' << "Modelo: XJ941" << '\t' << "Precio: 85,00 " << endl;
    cout << "Componente: Mezclador" << '\t' << "Modelo: AN918" << '\t' << "Precio: 130,00 " << endl;
    cout << "Componente: Mezclador" << '\t' << "Modelo: AI821" << '\t' << "Precio: 150,00  " << endl;
    cout << "Componente: Mezclador" << '\t' << "Modelo: MK537" << '\t' << "Precio: 325,00  " << endl;
    cout << "Selccione un modelo de reproductor: ";
    cin >> modelo;
    if (modelo == "CA188") return new Procesador("Amplificador", modelo, "80W", 115.00);
    return NULL;
}

SalidaDeAudio* Manejo::crearSalidaAudio()
{
    string modelo = "MK537";
    if (modelo == "MK537") return new SalidaDeAudio("Parlante", modelo, "200W", 235.00);
    return nullptr;
}