/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableSet;

@interface WebBasePluginPackage : NSObject  {
    NSMutableSet *pluginDatabases;
    struct String { 
        struct RefPtr<WTF::StringImpl> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    } path;
    struct PluginInfo { 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } name; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } file; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } desc; 
        struct Vector<WebCore::MimeClassInfo, 0> { 
            unsigned int m_size; 
            struct VectorBuffer<WebCore::MimeClassInfo, 0> { 
                struct MimeClassInfo {} *m_buffer; 
                unsigned int m_capacity; 
            } m_buffer; 
        } mimes; 
    } pluginInfo;
    struct RetainPtr<__CFBundle *> { 
        struct __CFBundle {} *m_ptr; 
    } cfBundle;
    int (*BP_CreatePluginMIMETypesPreferences)();
}

+ (id)pluginWithPath:(id)arg1;
+ (id)preferredLocalizationName;
+ (void)initialize;

- (void)wasRemovedFromPluginDatabase:(id)arg1;
- (void)wasAddedToPluginDatabase:(id)arg1;
- (BOOL)isNativeLibraryData:(id)arg1;
- (BOOL)isJavaPlugIn;
- (BOOL)supportsExtension:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
- (const struct PluginInfo { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct Vector<WebCore::MimeClassInfo, 0> { unsigned int x_4_1_1; struct VectorBuffer<WebCore::MimeClassInfo, 0> { struct MimeClassInfo {} *x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; } x4; }*)pluginInfo;
- (BOOL)getPluginInfoFromPLists;
- (id)pListForPath:(id)arg1 createFile:(BOOL)arg2;
- (id)_objectForInfoDictionaryKey:(id)arg1;
- (void)createPropertyListFile;
- (struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; })bundleIdentifier;
- (const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)path;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)supportsMIMEType:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
- (id)initWithPath:(id)arg1;
- (BOOL)load;
- (void)finalize;
- (BOOL)isQuickTimePlugIn;
- (struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; })bundleVersion;
- (id)MIMETypeForExtension:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
- (unsigned long)versionNumber;
- (void)unload;
- (oneway void)_webcore_releaseOnWebThread;
- (oneway void)release;

@end
