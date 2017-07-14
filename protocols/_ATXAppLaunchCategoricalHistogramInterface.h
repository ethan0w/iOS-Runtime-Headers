/* Generated by RuntimeBrowser.
 */

@protocol _ATXAppLaunchCategoricalHistogramInterface

@required

- (void)addLaunchWithBundleId:(NSString *)arg1 date:(NSDate *)arg2 category:(NSString *)arg3;
- (BOOL)bundleHasBeenLaunched:(NSString *)arg1;
- (void)decayByFactor:(double)arg1;
- (void)decayWithHalfLife:(double)arg1;
- (double)launchPopularityWithBundleId:(NSString *)arg1 category:(NSString *)arg2;
- (double)overallLaunchPopularityForBundleId:(NSString *)arg1;
- (double)overallLaunchPopularityForBundleId:(NSString *)arg1 category:(NSString *)arg2;
- (double)overallLaunchPopularityForCategory:(NSString *)arg1;
- (double)relativeLaunchPopularityWithBundleId:(NSString *)arg1 category:(NSString *)arg2;
- (BOOL)removeAllHistoryForBundleId:(NSString *)arg1;
- (BOOL)removeAllHistoryForCategory:(NSString *)arg1;
- (void)removeLaunchWithBundleId:(NSString *)arg1 category:(NSString *)arg2;
- (void)resetData;
- (double)totalLaunches;
- (double)totalLaunchesForCategory:(NSString *)arg1;
- (void)verifyDataIntegrity;

@end
