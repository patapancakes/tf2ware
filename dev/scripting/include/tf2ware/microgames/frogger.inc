// TEMPLATE module

public TEMPLATE_OnMinigame() {
    // These are forwards if you need a specific function!
    //AddToForward(g_justEntered, INVALID_HANDLE, TEMPLATE_justEntered);
    //AddToForward(g_OnEndMinigame, INVALID_HANDLE, TEMPLATE_End);

    // Should the person be able to attack?
    //g_attack = true;
    
    //The below function needs to be there if you're planning on giving clients a weapon!
    //RemoveAllWeapons();
}

/*
public TEMPLATE_End() {
    for (new i = 1; i <= MaxClients; i++) {
        if (IsValidClient(i)) {
            // do something?
        }
    }
}
*/


public TEMPLATE_justEntered(client) {
    if (IsValidClient(client)) {
    
        // Change his model to frog
        

        // Change the client's class?
        SetClientClass(client, "medic");
    }
}