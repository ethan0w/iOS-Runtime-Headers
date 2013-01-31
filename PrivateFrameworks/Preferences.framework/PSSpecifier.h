/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class IMAccount, NSArray, NSString, NSDictionary, CNFRegAlias, NSMutableDictionary;

@interface PSSpecifier : NSObject  {
    id target;
    SEL getter;
    SEL setter;
    SEL action;
    SEL cancel;
    Class detailControllerClass;
    int cellType;
    Class editPaneClass;
    int keyboardType;
    int autoCapsType;
    int autoCorrectionType;
    int textFieldType;
    NSString *_name;
    NSArray *_values;
    NSDictionary *_titleDict;
    NSDictionary *_shortTitleDict;
    id _userInfo;
    NSMutableDictionary *_properties;
    SEL _confirmationAction;
    SEL _confirmationCancelAction;
    SEL _buttonAction;
    SEL _controllerLoadAction;
    BOOL _showContentString;
}

@property(retain) CNFRegAlias * CNFRegAlias;
@property(retain) CNFRegAlias * CNFRegCallerIdAlias;
@property(retain) IMAccount * CNFRegAccount;
@property(retain) NSArray * values;
@property(retain) NSString * name;
@property(retain) id userInfo;
@property(retain) NSDictionary * titleDictionary;
@property(retain) NSDictionary * shortTitleDictionary;
@property(retain) NSString * identifier;
@property id target;
@property Class detailControllerClass;
@property int cellType;
@property Class editPaneClass;
@property SEL confirmationAction;
@property SEL confirmationCancelAction;
@property SEL buttonAction;
@property SEL controllerLoadAction;
@property BOOL showContentString;

+ (int)keyboardTypeForString:(id)arg1;
+ (int)autoCapsTypeForString:(id)arg1;
+ (int)autoCorrectionTypeForNumber:(id)arg1;
+ (id)emptyGroupSpecifier;
+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(int)arg6 edit:(Class)arg7;
+ (id)groupSpecifierWithName:(id)arg1;
+ (id)buttonSpecifierWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 confirmationInfo:(id)arg4;
+ (id)switchSpecifierWithTitle:(id)arg1 target:(id)arg2 setter:(SEL)arg3 getter:(SEL)arg4 key:(id)arg5;

- (id)identifier;
- (void)setTarget:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (id)target;
- (id)description;
- (id)userInfo;
- (void)dealloc;
- (id)init;
- (SEL)buttonAction;
- (void)setShowContentString:(BOOL)arg1;
- (void)setButtonAction:(SEL)arg1;
- (void)setConfirmationCancelAction:(SEL)arg1;
- (void)setConfirmationAction:(SEL)arg1;
- (id)titleDictionary;
- (void)setEditPaneClass:(Class)arg1;
- (Class)editPaneClass;
- (void)setCellType:(int)arg1;
- (int)titleCompare:(id)arg1;
- (void)setKeyboardType:(int)arg1 autoCaps:(int)arg2 autoCorrection:(int)arg3;
- (id)shortTitleDictionary;
- (void)setupIconImageWithBundle:(id)arg1;
- (void)setValues:(id)arg1 titles:(id)arg2;
- (void)loadValuesAndTitlesFromDataSource;
- (void)setShortTitleDictionary:(id)arg1;
- (void)setTitleDictionary:(id)arg1;
- (void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3;
- (void)setControllerLoadAction:(SEL)arg1;
- (SEL)confirmationCancelAction;
- (int)cellType;
- (SEL)confirmationAction;
- (SEL)controllerLoadAction;
- (BOOL)showContentString;
- (void)setDetailControllerClass:(Class)arg1;
- (Class)detailControllerClass;
- (void)removePropertyForKey:(id)arg1;
- (void)setupIconImageWithPath:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)properties;
- (void)setIdentifier:(id)arg1;
- (id)values;
- (void)setValues:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)setCNFRegCallerIdAlias:(id)arg1;
- (id)CNFRegCallerIdAlias;
- (void)setCNFRegAlias:(id)arg1;
- (void)setCNFRegAccount:(id)arg1;
- (id)CNFRegAccount;
- (id)CNFRegAlias;

@end
