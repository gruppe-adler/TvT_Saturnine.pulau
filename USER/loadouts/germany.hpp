class germany {
   class AllUnits {
        uniform[] = {"U_B_GEN_Soldier_F", "U_B_GEN_Commander_F"};
        backpack = "";
        vest[] = {"UK3CB_TKA_O_V_6b23_ml_BLU"};
        primaryWeapon[] = {"rhs_weap_g36c"};
        primaryWeaponMagazine = "rhssaf_30rnd_556x45_SOST_G36";
        primaryWeaponMuzzle = "";
        primaryWeaponOptics[] = {
            "rhs_acc_1p87",
            "optic_Yorris",
            "rhsusf_acc_eotech_552",
            "rhsusf_acc_T1_low"
        };
        primaryWeaponPointer = "rhsusf_acc_wmx_bk";
        primaryWeaponUnderbarrel = "";
        primaryWeaponUnderbarrelMagazine = "";
        secondaryWeapon = "";
        secondaryWeaponMagazine = "";
        secondaryWeaponMuzzle = "";
        secondaryWeaponOptics = "";
        secondaryWeaponPointer = "";
        secondaryWeaponUnderbarrel = "";
        secondaryWeaponUnderbarrelMagazine = "";
        handgunWeapon = "";
        handgunWeaponMagazine = "";
        handgunWeaponMuzzle = "";
        handgunWeaponOptics = "";
        handgunWeaponPointer = "";
        handgunWeaponUnderbarrel = "";
        handgunWeaponUnderbarrelMagazine = "";
        headgear = "H_Beret_gen_F";
        goggles = "";
        nvgoggles = "";
        binoculars = "Binocular";
        map = "ItemMap";
        gps = "ItemGPS";
        compass = "ItemCompass";
        watch = "ItemWatch";
        radio = "TFAR_anprc152";

        addItemsToUniform[] = {
            LIST_6("ACE_fieldDressing"),
            LIST_2("ACE_morphine"),
            LIST_2("ACE_Chemlight_HiWhite"),
            LIST_2("rhs_mag_rdg2_white"),
            LIST_4("ACE_splint"),
            "ACE_epinephrine",
            "ACE_Flashlight_KSF1",
            "ACE_MapTools"
        };
    };

    class Type {
        // Rifleman
        class Soldier_F {
            addItemsToVest[] = {
                LIST_8("rhssaf_30rnd_556x45_SOST_G36"),
                LIST_2("rhs_mag_rgd5"),
                LIST_1("rhs_mag_rdg2_white"),
                "ACE_EntrenchingTool"
            };
        };

        // Grenadier
        class Soldier_GL_F: Soldier_F {
            primaryWeapon = "rhs_weap_g36kv_ag36";
            primaryWeaponMagazine = "rhssaf_30rnd_556x45_SOST_G36";
            backpack = "B_Kitbag_rgr";
            addItemsToBackpack[] = {
                LIST_6("rhs_mag_m714_White")
            };
        };

        // Light AT
        class Soldier_LAT_F: Soldier_F {
            secondaryWeapon = "rhs_weap_rpg26";
        };

        // TL
        class Soldier_TL_F: Soldier_F {
            primaryWeapon = "rhs_weap_g36kv_ag36";
            primaryWeaponMagazine = "rhssaf_30rnd_556x45_SOST_G36";
            handgunWeapon = "rhs_weap_tr8";
            backpack = "B_Kitbag_rgr";
            addItemsToBackpack[] = {
                LIST_6("rhs_mag_m714_White"),
                LIST_2("rhs_mag_m713_Red"),
                LIST_2("rhs_mag_m715_Green"),
                LIST_1("grad_axe")
            };
        };

        // SQL
        class Soldier_SL_F: Soldier_TL_F {

        };

        // SQL
        class officer_F: Soldier_TL_F {

        };

        //autorifleman
        class Soldier_AR_F: Soldier_F {
            primaryWeapon = "rhs_weap_pkp";
            primaryWeaponMagazine = "rhs_100Rnd_762x54mmR_green";
            primaryWeaponOptics = "rhsusf_acc_eotech_xps3";
            backpack = "B_Kitbag_rgr";
            addItemsToVest[] = {
                LIST_2("rhs_100Rnd_762x54mmR_green"),
                LIST_1("rhs_mag_rdg2_white"),
            };
            addItemsToBackpack[] = {
                LIST_3("rhs_100Rnd_762x54mmR_green")
            };
        };

        //assistant autorifleman
        class Soldier_AAR_F: Soldier_F {
            backpack = "B_Kitbag_rgr";
            addItemsToBackpack[] = {
                LIST_4("rhs_100Rnd_762x54mmR_green")
            };
        };
    };

    class Rank {
        class LIEUTENANT {
            addItemsToBackpack[] = {"grad_beret_black"};
        };
    };
};