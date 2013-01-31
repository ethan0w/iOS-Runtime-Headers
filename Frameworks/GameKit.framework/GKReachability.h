/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKReachability : NSObject  {
    BOOL localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

+ (id)_gkReachabilityForLocalWiFi;
+ (id)_gkReachabilityWithHostName:(id)arg1;
+ (id)_gkReachabilityWithAddress:(const struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg1;
+ (id)_gkReachabilityForInternetConnection;

- (void)dealloc;
- (BOOL)_gkConnectionRequired;
- (BOOL)_gkStartNotifier;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (int)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)_gkStopNotifier;
- (int)_gkCurrentReachabilityStatus;

@end
