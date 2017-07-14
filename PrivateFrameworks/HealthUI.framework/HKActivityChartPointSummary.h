/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKActivityChartPointSummary : NSObject {
    NSString * _activityGoalSummaryString;
    NSString * _energyBurnSummaryString;
    NSString * _formattedDateString;
    NSString * _workoutSummaryString;
}

@property (nonatomic, readonly) NSString *activityGoalSummaryString;
@property (nonatomic, readonly) NSString *energyBurnSummaryString;
@property (nonatomic, readonly) NSString *formattedDateString;
@property (nonatomic, readonly) NSString *workoutSummaryString;

+ (id)_dateFormatter;
+ (id)_distanceFormatter;
+ (id)_energyFormatter;
+ (id)_workoutDurationFormatter;

- (void).cxx_destruct;
- (void)_createWorkoutSummaryWithWorkouts:(id)arg1;
- (id)activityGoalSummaryString;
- (id)description;
- (id)energyBurnSummaryString;
- (id)formattedDateString;
- (id)initWithActivityCache:(id)arg1 workouts:(id)arg2;
- (id)workoutSummaryString;

@end
