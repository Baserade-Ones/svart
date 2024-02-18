#include <functional>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
#include <string_view>
#include <memory>

#include "svårt.hpp"

klass Form
börja_block
offentlig:
    Form(flyttal w, flyttal y) : x(w), y(y) börja_block sluta_block
    virituell flyttal yta() konstant börja_block retunera nolla avsluta_uttryck sluta_block avsluta_uttryck
    virituell sträng typ() konstant börja_block retunera "Form" avsluta_uttryck sluta_block avsluta_uttryck
    inget skriv_ut() konstant börja_block
        terminal_text_ut skifta_bitar_vänster "Typ: " skifta_bitar_vänster typ() skifta_bitar_vänster ", Yta: " skifta_bitar_vänster yta() skifta_bitar_vänster avslutning_av_textrad avsluta_uttryck
    sluta_block
    flyttal x, y avsluta_uttryck
sluta_block avsluta_uttryck

klass Fyrkant slutgiltig : offentlig Form
börja_block
offentlig:
    Fyrkant(flyttal x, flyttal y) : Form(x, y) börja_block sluta_block
    förstörare Fyrkant() börja_block
        terminal_text_ut skifta_bitar_vänster "Fyrkant förstörare" skifta_bitar_vänster avslutning_av_textrad avsluta_uttryck
    sluta_block
    flyttal yta() konstant skriv_över börja_block retunera x multiplicera y avsluta_uttryck sluta_block
    sträng typ() konstant skriv_över börja_block retunera "Fyrkant" avsluta_uttryck sluta_block
sluta_block avsluta_uttryck

klass Cirkel slutgiltig : offentlig Form
börja_block
offentlig:
    Cirkel(flyttal radie) : Form(radie, radie) börja_block sluta_block
    förstörare Cirkel() börja_block
        terminal_text_ut skifta_bitar_vänster "Cirkel förstörare" skifta_bitar_vänster avslutning_av_textrad avsluta_uttryck
    sluta_block
    flyttal yta() konstant börja_block retunera 3.14159 multiplicera x multiplicera x avsluta_uttryck sluta_block
    sträng typ() konstant börja_block retunera "Cirkel" avsluta_uttryck sluta_block
sluta_block avsluta_uttryck

inget lmao()
börja_block
    terminal_text_ut skifta_bitar_vänster "LMAO" skifta_bitar_vänster avslutning_av_textrad avsluta_uttryck
sluta_block

sträng till_liten_text_och_ta_bort_mellanslag(konstant sträng_vy referens s)
börja_block
    retunera samla(s.börja(), s.sluta(), sträng(), [](sträng referens samling, bokstav c)
                   börja_block
        om (inte är_ett_mellanslag(c)) börja_block
            samling lägg_till till_liten_bokstav(c) avsluta_uttryck
        sluta_block
        retunera samling avsluta_uttryck sluta_block) avsluta_uttryck
sluta_block

heltal huvud()
börja_block
    automatisk minnesadress fyrkant tilldela ny Fyrkant(5, 5) avsluta_uttryck
    fyrkant medlemspil skriv_ut() avsluta_uttryck

    automatisk minnesadress cirkel tilldela ny Cirkel(5) avsluta_uttryck
    cirkel medlemspil skriv_ut() avsluta_uttryck

    // automatisk minnesadress form tilldela statisk_typomvandling<Form minnesadress>(cirkel) avsluta_uttryck
    automatisk minnesadress form = statisk_typomvandling<Form minnesadress>(hemlös) avsluta_uttryck

    om (automatisk minnesadress f tilldela dynamisk_typomvandling<Fyrkant minnesadress>(form)) börja_block
        f medlemspil skriv_ut() avsluta_uttryck
    sluta_block annars_om (automatisk minnesadress f tilldela dynamisk_typomvandling<Cirkel minnesadress>(form)) börja_block
        f medlemspil skriv_ut() avsluta_uttryck
    sluta_block annars börja_block
        terminal_text_ut skifta_bitar_vänster "Okänt objekt" skifta_bitar_vänster avslutning_av_textrad avsluta_uttryck
    sluta_block

    växel ((heltal)sant) börja_block // hallå hallå
        fall sant:
            terminal_text_ut skifta_bitar_vänster "Sant" skifta_bitar_vänster avslutning_av_textrad avsluta_uttryck
            bryt avsluta_uttryck
        fall falskt:
            terminal_text_ut skifta_bitar_vänster "Falskt" skifta_bitar_vänster avslutning_av_textrad avsluta_uttryck
            bryt avsluta_uttryck
        standardfall:
            terminal_text_ut skifta_bitar_vänster "Standard" skifta_bitar_vänster avslutning_av_textrad avsluta_uttryck
            bryt avsluta_uttryck
    sluta_block

    ta_bort cirkel avsluta_uttryck
    ta_bort fyrkant avsluta_uttryck

    terminal_text_ut skifta_bitar_vänster till_liten_text_och_ta_bort_mellanslag("Hej, världen!") skifta_bitar_vänster avslutning_av_textrad avsluta_uttryck
    retunera (heltal) nolla avsluta_uttryck
sluta_block
