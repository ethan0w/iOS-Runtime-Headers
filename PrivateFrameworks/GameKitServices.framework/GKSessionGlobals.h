/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKSessionGlobals : NSObject {
    unsigned int * _activePIDList;
    unsigned long  _activePIDListCount;
    unsigned long  _activePIDListSize;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    }  _lock;
}

- (BOOL)hasActivePID:(unsigned int)arg1;
- (id)init;
- (void)lock;
- (void)registerPID:(unsigned int)arg1;
- (void)unlock;
- (void)unregisterPID:(unsigned int)arg1;

@end
