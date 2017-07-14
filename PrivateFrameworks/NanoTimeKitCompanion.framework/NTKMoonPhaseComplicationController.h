/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKMoonPhaseComplicationController : NTKComplicationController <NTKTimeTravel> {
    NSTimer * _afterEventTimer;
    struct { 
        unsigned int wantsPhaseName : 1; 
        unsigned int wantsPhaseNumber : 1; 
        unsigned int wantsEventAndDate : 1; 
        unsigned int wantsLocked : 1; 
        unsigned int wantsPaused : 1; 
    }  _displayFlags;
    CLLocation * _location;
    BOOL  _missedUpdateWhilePaused;
    BOOL  _paused;
    NSDate * _timeTravelDate;
    struct NSNumber { Class x1; } * _token;
}

@property (nonatomic, readonly) <NTKMoonPhaseComplicationDisplay> *legacyDisplay;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, retain) NSNumber *token;

+ (BOOL)_acceptsComplicationType:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_activate;
- (void)_afterEventTimerFired:(id)arg1;
- (void)_asyncUpdateDisplay;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_invalidateEventTimer;
- (void)_scheduleAfterEventTimer:(id)arg1;
- (void)_updateDisplay;
- (void)_updateDisplayForced:(BOOL)arg1;
- (BOOL)hasTapAction;
- (id)location;
- (void)performTapAction;
- (void)setDataMode:(int)arg1 forDisplayWrapper:(id)arg2;
- (void)setLocation:(id)arg1;
- (void)setShowsLockedUI:(BOOL)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;
- (void)setToken:(struct NSNumber { Class x1; }*)arg1;
- (struct NSNumber { Class x1; }*)token;

@end
