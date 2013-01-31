/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLService : NSObject  {
}

+ (id)serviceForServiceType:(id)arg1;
+ (id)allServices;

- (BOOL)hasAccounts;
- (id)accountType;
- (id)serviceType;
- (int)maximumImageCount;
- (int)maximumURLCount;
- (BOOL)isServiceTypeSupportedByConfiguration;
- (BOOL)isSheetAccessPermitted;
- (BOOL)isFirstClassService;
- (void)addExtraParameters:(id)arg1 forRequest:(id)arg2;
- (BOOL)isAvailable;

@end
