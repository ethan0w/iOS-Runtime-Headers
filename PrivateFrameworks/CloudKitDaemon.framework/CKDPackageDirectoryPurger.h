/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPackageDirectoryPurger : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _rootDirectories;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSMutableArray *rootDirectories;

+ (void)schedulePeriodicPurgesInDirectory:(id)arg1;
+ (id)sharedPurger;

- (void).cxx_destruct;
- (void)addRootDirectory:(id)arg1;
- (id)init;
- (void)purgeAll;
- (void)purgeDirectory:(id)arg1;
- (void)purgeRootDirectory:(id)arg1;
- (id)queue;
- (void)registerXPCActivity;
- (id)rootDirectories;

@end
