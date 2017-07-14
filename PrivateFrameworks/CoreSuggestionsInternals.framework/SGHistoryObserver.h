/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGHistoryObserver : NSObject <SGSuggestHistoryObserver> {
    SGSqlEntityStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)hashesDidChange;
- (id)initWithStore:(id)arg1;
- (void)processNewConfirmOrRejectEventHashes:(id)arg1;

@end
