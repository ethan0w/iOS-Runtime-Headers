/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABGroupWrapper, <ABGroupWrapperDelegate>, NSString, ACAccountStore, NSSet, AccountsManager;

@interface ABGroupWrapper : NSObject  {
    void *_addressBook;
    NSString *_accountIdentifier;
    void *_source;
    void *_group;
    NSString *_cachedName;
    AccountsManager *_accountsManager;
    ACAccountStore *_accountStore;
    id _delegate;
    NSSet *_childGroupWrappers;
    BOOL _shouldBeSelectedWhenAllChildrenAreSelected;
    BOOL _selected;
    ABGroupWrapper *_parentGroupWrapper;
}

@property(readonly) NSString * accountIdentifier;
@property(readonly) NSString * name;
@property(readonly) void* addressBook;
@property(readonly) void* source;
@property(readonly) void* group;
@property(retain) NSSet * childGroupWrappers;
@property BOOL shouldBeSelectedWhenAllChildrenAreSelected;
@property ABGroupWrapper * parentGroupWrapper;
@property(getter=isSelected) BOOL selected;
@property <ABGroupWrapperDelegate> * delegate;
@property(readonly) int sourceType;
@property(retain) AccountsManager * accountsManager;
@property(retain) ACAccountStore * accountStore;
@property(readonly) NSString * _accountDescriptionBasedOnIdentifier;

+ (id)newGroupWrapperFromDictionaryRepresentation:(id)arg1 withAddressBook:(void*)arg2;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 excludingSearchableStores:(BOOL)arg3;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 accountsManager:(id)arg3 accountStore:(id)arg4;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 accountsManager:(id)arg3 accountStore:(id)arg4 excludingSearchableStores:(BOOL)arg5 isSoleAccount:(BOOL)arg6;

- (id)accountIdentifier;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)name;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void*)addressBook;
- (void*)source;
- (int)sourceType;
- (void*)group;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isSelected;
- (id)accountStore;
- (int)score;
- (id)parentGroupWrapper;
- (BOOL)shouldBeSelectedWhenAllChildrenAreSelected;
- (id)childGroupWrappers;
- (id)accountsManager;
- (BOOL)isContainerWrapper;
- (BOOL)showLinkedPeople;
- (BOOL)isGlobalWrapper;
- (id)accountManager;
- (void)setSelected:(BOOL)arg1 propagateSelectionToChildren:(BOOL)arg2;
- (void)childGroupWrapper:(id)arg1 didBecomeSelected:(BOOL)arg2;
- (id)_accountDescriptionBasedOnIdentifier;
- (int)compareToGroupWrapper:(id)arg1;
- (void)setShouldBeSelectedWhenAllChildrenAreSelected:(BOOL)arg1;
- (void)setParentGroupWrapper:(id)arg1;
- (void)setChildGroupWrappers:(id)arg1;
- (id)initWithAddressBook:(void*)arg1 accountIdentifier:(id)arg2 source:(void*)arg3 group:(void*)arg4;
- (void)setAccountStore:(id)arg1;
- (void)setAccountsManager:(id)arg1;
- (BOOL)isDirectoryWrapper;
- (id)copyDictionaryRepresentation;

@end
