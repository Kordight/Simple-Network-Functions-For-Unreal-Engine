#include "MyNetworkFunctions.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "IPAddress.h"




FString UMyNetworkFunctions::GetLocalIPAddress()
{
    bool canBind = false;
    TSharedPtr<FInternetAddr> localIp = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, canBind);
    return (localIp->IsValid() ? localIp->ToString(false) : "");
}

bool UMyNetworkFunctions::IsLanConnected()
{
    bool canBind = false;
    TSharedPtr<FInternetAddr> localIp = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, canBind);

    if (localIp.IsValid() && GetLocalIPAddress() != "")
    {
        return true;
    }
    else
    {
        return false;
    }
}




