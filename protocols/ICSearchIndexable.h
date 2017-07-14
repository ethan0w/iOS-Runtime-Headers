/* Generated by RuntimeBrowser.
 */

@protocol ICSearchIndexable <NSObject>

@required

- (NSArray *)authorsExcludingCurrentUser;
- (NSString *)identifier;
- (BOOL)isHiddenFromSearch;
- (NSManagedObjectContext *)managedObjectContext;
- (NSDate *)modificationDate;
- (NSManagedObjectID *)objectID;
- (NSString *)objectIdentifier;
- (NSString *)searchDomainIdentifier;
- (NSArray *)searchIndexStringsOutHasAdditionalStrings:(BOOL*)arg1;
- (NSString *)searchIndexableTitleUsingContentTextIfNecessary:(NSString *)arg1;
- (BOOL)searchResultCanBeDeletedFromNoteContext;
- (unsigned int)searchResultsSection;
- (CSSearchableItemAttributeSet *)searchableItemAttributeSet;
- (NSString *)searchableItemIdentifier;
- (BOOL)shouldUpdateIndexForChangedValues:(NSDictionary *)arg1;
- (int)visibilityTestingType;

@optional

- (ICGenerateSearchIndexStringsOperation *)generateSearchIndexStringsOperation;
- (BOOL)ignoreInSearchIndexer;
- (void)releaseMemoryForIndexing;

@end
