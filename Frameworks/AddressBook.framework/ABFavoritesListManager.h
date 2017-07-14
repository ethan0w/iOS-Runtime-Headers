/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABFavoritesListManager : NSObject {
    void * _addressBook;
    struct { 
        unsigned int dirty : 1; 
        unsigned int postCount : 1; 
        unsigned int needsReload : 1; 
        unsigned int unused : 29; 
    }  _flags;
    NSMutableArray * _list;
    struct __CFDictionary { } * _uidToEntry;
}

+ (id)sharedInstance;
+ (id)sharedInstanceWithAddressBook:(void*)arg1;

- (void)_addEntryToMap:(id)arg1;
- (void)_delayedLookup;
- (void)_entryIdentityChanged:(id)arg1;
- (BOOL)_isValueForEntry:(id)arg1 equalToValue:(id)arg2;
- (void)_listChangedExternally;
- (void)_loadList;
- (void)_loadListWithAddressBook:(void*)arg1;
- (void)_postChangeNotification;
- (void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2;
- (void)_scheduleSave;
- (void)addEntry:(id)arg1;
- (BOOL)addEntryForPerson:(void*)arg1 property:(int)arg2 withIdentifier:(int)arg3;
- (BOOL)containsEntryWithIdentifier:(int)arg1 forPerson:(void*)arg2;
- (BOOL)containsEntryWithType:(int)arg1 forPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)dealloc;
- (id)entries;
- (id)entriesForPeople:(id)arg1;
- (id)entriesForPerson:(void*)arg1;
- (id)entryFromEntries:(id)arg1 type:(int)arg2 property:(int)arg3 identifier:(int)arg4 value:(id)arg5 label:(id)arg6;
- (id)entryFromEntries:(id)arg1 type:(int)arg2 property:(int)arg3 value:(id)arg4 label:(id)arg5;
- (BOOL)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2;
- (id)entryWithIdentifier:(int)arg1 forPerson:(void*)arg2;
- (id)entryWithType:(int)arg1 forPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)initWithAddressBook:(void*)arg1;
- (BOOL)isFull;
- (void)moveEntryAtIndex:(int)arg1 toIndex:(int)arg2;
- (void)recacheIdentitiesSoon;
- (void)removeAllEntries;
- (void)removeEntryAtIndex:(int)arg1;
- (void)save;
- (void)saveImmediately;

@end
