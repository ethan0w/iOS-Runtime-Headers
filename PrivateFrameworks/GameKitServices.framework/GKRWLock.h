/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKRWLock : NSObject {
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    }  _rwLock;
}

- (void)dealloc;
- (id)init;
- (void)rdlock;
- (int)tryrdlock;
- (void)unlock;
- (void)wrlock;

@end
