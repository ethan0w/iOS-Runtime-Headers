/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STStartWorkoutRequest : AFSiriRequest {
    int  _activityType;
    HKQuantity * _goal;
    int  _goalType;
    BOOL  _isOpenGoal;
    int  _locationType;
    BOOL  _skipActivitySetup;
    int  _userMode;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithType:(int)arg1 location:(int)arg2 goal:(id)arg3 goalType:(int)arg4 userMode:(int)arg5 isOpenGoal:(BOOL)arg6 skipActivitySetup:(BOOL)arg7;
- (int)activityType;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (int)goalType;
- (id)initWithCoder:(id)arg1;
- (BOOL)isOpenGoal;
- (int)locationType;
- (BOOL)skipActivitySetup;
- (int)userMode;
- (id)workoutGoal;

@end
