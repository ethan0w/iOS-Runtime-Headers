/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableSet, NSString, NSSet, <CoreDAVGetAccountPropertiesTaskGroupDelegate>, NSURL;

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate, CoreDAVTaskDelegate> {
    NSURL *_principalURL;
    NSString *_displayName;
    NSURL *_resourceID;
    NSSet *_emailAddresses;
    NSSet *_collections;
    NSSet *_principalSearchProperties;
    BOOL _isExpandPropertyReportSupported;
    BOOL _fetchPrincipalSearchProperties;
    BOOL _shouldIgnoreHomeSetOnDifferentHost;
    NSMutableSet *_redirectHistory;
}

@property(readonly) NSURL * principalURL;
@property(readonly) NSString * displayName;
@property(readonly) NSURL * resourceID;
@property(readonly) NSSet * emailAddresses;
@property(readonly) NSSet * collections;
@property(readonly) NSSet * principalSearchProperties;
@property(readonly) BOOL isExpandPropertyReportSupported;
@property BOOL fetchPrincipalSearchProperties;
@property <CoreDAVGetAccountPropertiesTaskGroupDelegate> * delegate;
@property BOOL shouldIgnoreHomeSetOnDifferentHost;


- (id)description;
- (void)dealloc;
- (id)principalURL;
- (void)setShouldIgnoreHomeSetOnDifferentHost:(BOOL)arg1;
- (id)principalSearchProperties;
- (void)setFetchPrincipalSearchProperties:(BOOL)arg1;
- (BOOL)isExpandPropertyReportSupported;
- (void)searchPropertySetTask:(id)arg1 completetWithPropertySearchSet:(id)arg2 error:(id)arg3;
- (BOOL)fetchPrincipalSearchProperties;
- (void)_taskCompleted:(id)arg1 withError:(id)arg2;
- (void)processPrincipalHeaders:(id)arg1;
- (void)coaxServerForPrincipalHeaders;
- (BOOL)forceOptionsRequest;
- (BOOL)shouldIgnoreHomeSetOnDifferentHost;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)resourceID;
- (id)homeSet;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (id)_copyAccountPropertiesPropFindElements;
- (id)displayName;
- (id)collections;
- (id)emailAddresses;

@end
