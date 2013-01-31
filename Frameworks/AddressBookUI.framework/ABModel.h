/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, ABContactsFilter, NSRecursiveLock, NSMutableArray;

@interface ABModel : NSObject  {
    void *_addressBook;
    struct { struct { /* ? */ } *x1; int x2; int x3; } *_sectionLists;
    struct __CFDictionary { } *_headerSortKeyToHeaderString;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _displayedMemberPreparedRange;
    unsigned int _numberOfDisplayedMembers;
    BOOL _displayedMembersAreSearchResults;
    void *_selectedPerson;
    unsigned int _displayOrdering;
    struct __CFArray { } *_databaseChangeDelegates;
    void *_backgroundAddressBook;
    BOOL _backgroundAddressBookInvalidated;
    NSMutableArray *_cachedModelRecords;
    NSRecursiveLock *_memberLock;
    BOOL _loadingInBackground;
    NSRecursiveLock *_backgroundLoadingLock;
    BOOL _backgroundInvalidated;
    id _delayedNotificationHandler;
    BOOL _autoInvalidateOnDatabaseChange;
    NSArray *_lastSeenSources;
    NSArray *_lastSeenGroups;
    int _meID;
    ABContactsFilter *_displayedContactsFilter;
    ABContactsFilter *_selectedContactsFilter;
    ABContactsFilter *_lastSelectedContactsFilter;
}

@property(retain) ABContactsFilter * displayedContactsFilter;
@property(readonly) ABContactsFilter * selectedContactsFilter;
@property(readonly) ABContactsFilter * lastSelectedContactsFilter;
@property void* addressBook;

+ (void)initialize;
+ (unsigned int)sortOrdering;

- (id)allGroups;
- (void)dealloc;
- (void*)addressBook;
- (id)allSources;
- (void)setSortOrdering:(unsigned int)arg1;
- (void)setAddressBook:(void*)arg1;
- (id)allDatabaseDirectories;
- (id)databaseSubdirectory;
- (id)databaseFullDirectory;
- (id)databaseHomeDirectory;
- (void)stopDelayingNotificationsForDatabaseChangeDelegate:(id)arg1 andDeliverDelayedNotifications:(BOOL)arg2;
- (void)startDelayingNotificationsForDatabaseChangeDelegate:(id)arg1;
- (struct __CFArray { }*)_databaseChangeDelegates;
- (void)removeDatabaseChangeDelegate:(id)arg1;
- (void)addDatabaseChangeDelegate:(id)arg1;
- (void)updateForMajorAddressBookChange;
- (void)_modelDatabaseChangedExternally:(struct __CFDictionary { }*)arg1;
- (void)_modelDatabaseChangedLocally:(struct __CFDictionary { }*)arg1;
- (int)meID;
- (void)invalidateLastSelectedContactsFilter;
- (void*)selectedPerson;
- (struct { struct { /* ? */ } *x1; int x2; int x3; }*)displayedMemberSectionLists;
- (void)copyDisplayedNamePieces:(id*)arg1 isGroup:(BOOL*)arg2 highlightIndex:(int*)arg3 forMemberID:(int*)arg4 atindex:(unsigned int)arg5;
- (int)indexForDisplayedMember:(void*)arg1;
- (void*)displayedMemberAtIndex:(unsigned int)arg1;
- (id)allCachedModelRecords;
- (int)displayedMemberSectionListsCount;
- (void)setFilteredDisplayedMembers:(struct __CFArray { }*)arg1;
- (void)resetSortKeyToHeaderStringDictionary;
- (void)setDisplayNameOrdering:(unsigned int)arg1;
- (void)_notifyDelegatesOfExternalDatabaseChangeWithDeletedGroup:(BOOL)arg1 deletedPerson:(BOOL)arg2;
- (id)displayedContactsFilter;
- (id)selectedContactsFilter;
- (void)setSelectedPerson:(void*)arg1;
- (void)_updateForMajorAddressBookChange:(BOOL)arg1;
- (void)setDisplayedContactsFilter:(id)arg1;
- (void)setSelectedContactsFilter:(id)arg1;
- (void)setLastSelectedContactsFilter:(id)arg1;
- (int)_indexOfMember:(void*)arg1 inDisplayedMembers:(id)arg2;
- (id)_displayedGroupMembersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)_partialDisplayedGroupMembersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_startBackgroundThreadIfNecessaryScanningForward:(BOOL)arg1;
- (void)_loadMembersInBackground:(id)arg1;
- (struct __CFArray { }*)_copyArrayOfPeopleInDisplayedContactsFilterForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inBackground:(BOOL)arg2;
- (id)_newModelRecordFromRecord:(void*)arg1;
- (id)displayedMembersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned int)numberOfDisplayedMembers;
- (void)_cachePeople:(struct __CFArray { }*)arg1 atEnd:(BOOL)arg2;
- (long)resetFullSectionList:(struct __CFDictionary { }*)arg1 maximumSectionCount:(int)arg2;
- (long)resetPartialSectionListWithMaximumCount:(int)arg1 headerSortKeyToHeaderString:(struct __CFDictionary { }*)arg2;
- (BOOL)shouldUsePartialLoadingForContactsFilter:(id)arg1;
- (struct __CFDictionary { }*)headerSortKeyToHeaderStringDictionary;
- (void)_waitUntilBackgroundThreadFinished;
- (void)prepareDisplayedMembersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)invalidateDisplayedMembers;
- (void)setAutoInvalidateOnDatabaseChange:(BOOL)arg1;
- (void)_cacheMeID;
- (void)resetSectionList;
- (id)lastSelectedContactsFilter;
- (id)initWithAddressBook:(void*)arg1;

@end
