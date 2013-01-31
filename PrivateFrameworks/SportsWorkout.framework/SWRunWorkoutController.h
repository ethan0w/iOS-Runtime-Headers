/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class SWUserInteractionSnapshotObserver, SWRunWorkout, CLLocation, SWRunWorkoutPreset, SWDataControllerSnapshotObserver, SWRemote, SWFastestDistanceWindowObserver, SWRunSensor, SWIntervalSnapshotObserver, NSDictionary, SWDataController, CLLocationManager, NSString, NSMutableArray, NSTimer;

@interface SWRunWorkoutController : NSObject <CLLocationManagerDelegate> {
    SWRunSensor *_sensor;
    SWRemote *_remote;
    SWRunWorkout *_workout;
    NSString *_workoutState;
    BOOL _hasEverStarted;
    BOOL _hasFiredBeginningWorkoutPrompt;
    BOOL _sensorBatteryIsLowNotificationSent;
    SWRunWorkoutPreset *_preset;
    BOOL _isWalk;
    NSMutableArray *_workoutObservers;
    CLLocationManager *_locationManager;
    NSTimer *_workoutObserverTimer;
    unsigned int _previousObservedElapsedTimeInSeconds;
    float _previousObservedPaceInSecondsPerMile;
    float _previousObservedDistanceInMiles;
    float _previousObservedCalories;
    CLLocation *_previousObservedLocation;
    SWIntervalSnapshotObserver *_mileSnapshotObserver;
    SWIntervalSnapshotObserver *_kmSnapshotObserver;
    SWIntervalSnapshotObserver *_tenSecondSnapshotObserver;
    SWFastestDistanceWindowObserver *_fastestMileObserver;
    SWFastestDistanceWindowObserver *_fastestKilometerObserver;
    SWDataControllerSnapshotObserver *_dataControllerSnapshotObserver;
    SWUserInteractionSnapshotObserver *_userInteractionSnapshotObserver;
    SWDataController *_dataController;
}

@property(readonly) SWRunSensor * sensor;
@property(readonly) SWRemote * remote;
@property(readonly) NSString * workoutState;
@property(readonly) NSDictionary * workoutData;
@property(readonly) BOOL hasEverStarted;
@property(readonly) SWDataController * dataController;
@property(retain) SWRunWorkoutPreset * preset;
@property BOOL isCalibration;
@property(readonly) BOOL isCalibratedForWalk;
@property(readonly) BOOL isCalibratedForRun;
@property(readonly) BOOL canBeUsedForRunCalibration;
@property(readonly) BOOL canBeUsedForWalkCalibration;
@property(readonly) float minCalibrationDistanceMiles;
@property(readonly) float maxCalibrationDistanceMiles;
@property(readonly) BOOL hasPowerSong;
@property(readonly) NSString * powerSongName;

+ (id)distanceUnitForString:(id)arg1;
+ (id)goalTypeForString:(id)arg1;
+ (float)kgsToLbs:(float)arg1;
+ (float)lbsToKgs:(float)arg1;
+ (float)secondsPerKmToSecondsPerMile:(float)arg1;
+ (float)secondsPerMileToSecondsPerKm:(float)arg1;
+ (float)milesToKm:(float)arg1;
+ (BOOL)shouldUseKilometersForDistanceWithWorkoutSummary:(id)arg1;
+ (BOOL)shouldUseKilometersForPaceWithWorkoutSummary:(id)arg1;
+ (void)resetDefaultController;
+ (id)defaultController;
+ (BOOL)isWorkoutInProgressOnSystem;
+ (id)__uniqueIdentifier;
+ (id)__systemVersion;
+ (id)distanceDisplayUnitsForPreferences;
+ (float)kmToMiles:(float)arg1;
+ (void)disableSDA;
+ (void)enableSDA;
+ (void)__releaseWorkoutInProgressFileLock;
+ (BOOL)__takeWorkoutInProgressFileLock;

- (void)setPreset:(id)arg1;
- (id)preset;
- (void)_postNotificationName:(id)arg1;
- (void)dealloc;
- (id)remote;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (id)dataController;
- (BOOL)hasEverStarted;
- (id)workoutState;
- (BOOL)hasPowerSong;
- (void)unregisterWorkoutObserver:(id)arg1;
- (BOOL)saveCalibrationDataWithAdjustedDistanceInMiles:(float)arg1;
- (BOOL)saveCalibrationData;
- (float)maxCalibrationDistanceMiles;
- (float)minCalibrationDistanceMiles;
- (BOOL)isCalibratedForRun;
- (BOOL)isCalibratedForWalk;
- (void)stopVoicePrompts;
- (void)prepareToActivateWorkout;
- (id)powerSongName;
- (id)_powerSongPersistentUIDString;
- (void)_updateWorkoutObserversForTimer:(id)arg1;
- (void)_cancelWorkoutObserverTimer;
- (void)_startWorkoutObserverTimer;
- (void)_updateWorkoutObserversForUserEvent:(id)arg1;
- (void)_searchStateChangedNotification:(id)arg1;
- (void)_linkStateChangedNotification:(id)arg1;
- (void)_remoteCommandIssued:(id)arg1;
- (void)_beginSearchingForSensorAfterLink;
- (void)_setWorkoutState:(id)arg1;
- (void)_updateWorkoutObserversForOldState:(id)arg1 newState:(id)arg2;
- (void)endWorkout;
- (void)playOnDemandPrompt;
- (void)playPowerSong;
- (void)togglePauseResumeWorkoutFromHeadset;
- (void)refreshSettings;
- (void)registerWorkoutObserver:(id)arg1;
- (BOOL)_shouldRecordLocation;
- (id)initWithSensor:(id)arg1 remote:(id)arg2;
- (void)setIsCalibration:(BOOL)arg1;
- (BOOL)isCalibration;
- (id)sensor;
- (void)pauseWorkout;
- (void)activateWorkout;
- (id)workoutData;
- (void)resetCalibration;
- (BOOL)canBeUsedForRunCalibration;
- (BOOL)canBeUsedForWalkCalibration;
- (void)unlinkRemote;

@end
