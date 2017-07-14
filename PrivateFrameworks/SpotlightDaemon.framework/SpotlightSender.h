/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface SpotlightSender : NSObject

+ (void)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(int)arg4;
+ (void)addOrUpdateSearchableItems:(id)arg1 itemsContent:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 client:(int)arg5;
+ (void)addUserActions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(int)arg4;
+ (id)clientConnection:(int)arg1;
+ (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 client:(int)arg3;
+ (void)deleteAllSearchableItemsWithBundleID:(id)arg1 client:(int)arg2;
+ (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(int)arg4;
+ (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 client:(int)arg4;
+ (void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2 client:(int)arg3;
+ (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 client:(int)arg3;
+ (void)deleteSearchableItemsWithEncodedIdentifiers:(id)arg1 bundleID:(id)arg2 client:(int)arg3;
+ (void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 contentType:(id)arg3 client:(int)arg4;
+ (void)dispatchWithOptions:(int)arg1 block:(id /* block */)arg2;
+ (BOOL)enabledForClient:(int)arg1;
+ (BOOL)jobForDuet:(int)arg1;
+ (BOOL)jobForDuetExpertCenter:(int)arg1;
+ (BOOL)jobForSuggestions:(int)arg1;
+ (BOOL)jobForTest:(int)arg1;
+ (void)purgeSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 client:(int)arg3;
+ (void)setup;

@end
