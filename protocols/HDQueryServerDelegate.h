/* Generated by RuntimeBrowser.
 */

@protocol HDQueryServerDelegate <NSObject>

@required

- (NSArray *)queryServer:(HDQueryServer *)arg1 filterSamplesForReadAuthorization:(NSArray *)arg2;
- (BOOL)queryServer:(HDQueryServer *)arg1 isAuthorizationStatusDeterminedForTypes:(NSSet *)arg2 error:(id*)arg3;
- (BOOL)queryServer:(HDQueryServer *)arg1 isAuthorizedToReadType:(HKObjectType *)arg2 withRestrictedSourceIdentifier:(id*)arg3 authorizationAnchor:(id*)arg4;
- (void)queryServer:(void *)arg1 requestsAuthorizationForSamples:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HDQueryServer *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (BOOL)queryServerClientHasActiveWorkout:(HDQueryServer *)arg1;
- (BOOL)queryServerClientIsInBackground:(HDQueryServer *)arg1;
- (void)queryServerDidFinish:(HDQueryServer *)arg1;
- (BOOL)queryServerShouldObserveInBackground:(HDQueryServer *)arg1;

@end
