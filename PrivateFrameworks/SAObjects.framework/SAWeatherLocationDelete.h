/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, SAWeatherLocation;

@interface SAWeatherLocationDelete : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property(retain) SAWeatherLocation * weatherLocation;

+ (id)locationDeleteWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationDelete;

- (void)setWeatherLocation:(id)arg1;
- (id)weatherLocation;
- (BOOL)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
