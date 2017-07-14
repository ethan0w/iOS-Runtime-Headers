/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsPeriodicUpdateManager : NSObject <HDFitnessFriendsManagerReadyObserver> {
    HDFitnessFriendsActivityDataManager * _activityDataManager;
    HDFitnessFriendsCloudKitManager * _cloudKitManager;
    HDFitnessFriendsFriendListManager * _friendListManager;
    BOOL  _hasRegisteredForUpdates;
    BOOL  _isWatch;
    HDFitnessFriendsRelationshipManager * _relationshipManager;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasRegisteredForUpdates;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_performUpdateWithCompletion:(id /* block */)arg1;
- (void)beginPeriodicUpdates;
- (void)endPeriodicUpdates;
- (void)fitnessFriendsManagerReady:(id)arg1;
- (BOOL)hasRegisteredForUpdates;
- (id)init;
- (id)initWithIsWatch:(BOOL)arg1;
- (void)requestImmediateUpdate;

@end
