#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class AddressLibAddressApiModelCompanion, AddressLibAddressApiModel, AddressLibKotlinUnit, AddressLibKotlinEnumCompanion, AddressLibKotlinEnum<E>, AddressLibCrudState, AddressLibKotlinArray<T>, AddressLibAddress, AddressLibCFlow<T>, AddressLibResponse<T>, AddressLibResponseSuccess<T>, AddressLibAddressDatabaseCompanion, AddressLibAddressAdapter, AddressLibRuntimeQuery<__covariant RowType>, AddressLibLocalAddressId, AddressLibDatabaseWrapper, AddressLibKotlinThrowable, AddressLibKotlinException, AddressLibKotlinRuntimeException, AddressLibKotlinIllegalStateException, AddressLibRuntimeTransacterTransaction, AddressLibKodein_diDIModule, AddressLibKodein_diDITrigger, AddressLibKotlinx_serialization_coreSerializersModule, AddressLibKotlinx_serialization_coreSerialKind, AddressLibKotlinNothing, AddressLibKotlinByteArray, AddressLibKodein_diDIKey<__contravariant C, __contravariant A, __covariant T>, AddressLibKodein_diScopeRegistry, AddressLibKotlinByteIterator, AddressLibKodein_diReference<__covariant T>, AddressLibKodein_diDIDefinition<C, A, T>, AddressLibKotlinTriple<__covariant A, __covariant B, __covariant C>, AddressLibKodein_diSearchSpecs, AddressLibKodein_diDIDefining<C, A, T>;

@protocol AddressLibKotlinx_serialization_coreKSerializer, AddressLibAddressDatabase, AddressLibKotlinx_coroutines_coreFlowCollector, AddressLibKotlinx_coroutines_coreFlow, AddressLibKtor_ioCloseable, AddressLibKotlinComparable, AddressLibRuntimeColumnAdapter, AddressLibAddressDatabaseQueries, AddressLibRuntimeTransactionWithoutReturn, AddressLibRuntimeTransactionWithReturn, AddressLibRuntimeTransacter, AddressLibRuntimeSqlDriver, AddressLibRuntimeSqlDriverSchema, AddressLibKodein_diDIBuilder, AddressLibKodein_diDI, AddressLibRepo, AddressLibKotlinx_serialization_coreEncoder, AddressLibKotlinx_serialization_coreSerialDescriptor, AddressLibKotlinx_serialization_coreSerializationStrategy, AddressLibKotlinx_serialization_coreDecoder, AddressLibKotlinx_serialization_coreDeserializationStrategy, AddressLibKotlinIterator, AddressLibRuntimeTransactionCallbacks, AddressLibRuntimeSqlPreparedStatement, AddressLibRuntimeSqlCursor, AddressLibRuntimeCloseable, AddressLibRuntimeQueryListener, AddressLibKodein_diDIBuilderDirectBinder, AddressLibKodein_diDIBinding, AddressLibKodein_diDIBuilderTypeBinder, AddressLibKodein_typeTypeToken, AddressLibKodein_diContextTranslator, AddressLibKodein_diDIBuilderConstantBinder, AddressLibKodein_diDirectDI, AddressLibKodein_diDIContainerBuilder, AddressLibKodein_diDIBindBuilder, AddressLibKodein_diScope, AddressLibKodein_diDIBindBuilderWithScope, AddressLibKodein_diDIContainer, AddressLibKodein_diDIContext, AddressLibKodein_diDIAware, AddressLibKotlinx_serialization_coreCompositeEncoder, AddressLibKotlinAnnotation, AddressLibKotlinx_serialization_coreCompositeDecoder, AddressLibKodein_diDIBindingCopier, AddressLibKodein_diBindingDI, AddressLibKodein_diBinding, AddressLibKodein_diDirectDIAware, AddressLibKodein_diDirectDIBase, AddressLibKodein_diDITree, AddressLibKotlinLazy, AddressLibKotlinx_serialization_coreSerializersModuleCollector, AddressLibKotlinKClass, AddressLibKodein_diWithContext, AddressLibKodein_diScopeCloseable, AddressLibKodein_diExternalSource, AddressLibKotlinKDeclarationContainer, AddressLibKotlinKAnnotatedElement, AddressLibKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface AddressLibBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface AddressLibBase (AddressLibBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface AddressLibMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface AddressLibMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorAddressLibKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface AddressLibNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface AddressLibByte : AddressLibNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface AddressLibUByte : AddressLibNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface AddressLibShort : AddressLibNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface AddressLibUShort : AddressLibNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface AddressLibInt : AddressLibNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface AddressLibUInt : AddressLibNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface AddressLibLong : AddressLibNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface AddressLibULong : AddressLibNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface AddressLibFloat : AddressLibNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface AddressLibDouble : AddressLibNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface AddressLibBoolean : AddressLibNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddressApiModel")))
@interface AddressLibAddressApiModel : AddressLibBase
- (instancetype)initWithId:(int64_t)id firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName address1:(NSString *)address1 address2:(NSString * _Nullable)address2 city:(NSString *)city zipCode:(NSString *)zipCode phone:(NSString * _Nullable)phone stateName:(NSString * _Nullable)stateName alternativePhone:(NSString * _Nullable)alternativePhone company:(NSString * _Nullable)company stateId:(int32_t)stateId countryId:(int32_t)countryId __attribute__((swift_name("init(id:firstName:lastName:address1:address2:city:zipCode:phone:stateName:alternativePhone:company:stateId:countryId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AddressLibAddressApiModelCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (int32_t)component12 __attribute__((swift_name("component12()")));
- (int32_t)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (AddressLibAddressApiModel *)doCopyId:(int64_t)id firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName address1:(NSString *)address1 address2:(NSString * _Nullable)address2 city:(NSString *)city zipCode:(NSString *)zipCode phone:(NSString * _Nullable)phone stateName:(NSString * _Nullable)stateName alternativePhone:(NSString * _Nullable)alternativePhone company:(NSString * _Nullable)company stateId:(int32_t)stateId countryId:(int32_t)countryId __attribute__((swift_name("doCopy(id:firstName:lastName:address1:address2:city:zipCode:phone:stateName:alternativePhone:company:stateId:countryId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *address1 __attribute__((swift_name("address1")));
@property NSString * _Nullable address2 __attribute__((swift_name("address2")));
@property NSString * _Nullable alternativePhone __attribute__((swift_name("alternativePhone")));
@property NSString *city __attribute__((swift_name("city")));
@property NSString * _Nullable company __attribute__((swift_name("company")));
@property int32_t countryId __attribute__((swift_name("countryId")));
@property NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property int64_t id __attribute__((swift_name("id")));
@property NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property NSString * _Nullable phone __attribute__((swift_name("phone")));
@property int32_t stateId __attribute__((swift_name("stateId")));
@property NSString * _Nullable stateName __attribute__((swift_name("stateName")));
@property NSString *zipCode __attribute__((swift_name("zipCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddressApiModel.Companion")))
@interface AddressLibAddressApiModelCompanion : AddressLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AddressLibAddressApiModelCompanion *shared __attribute__((swift_name("shared")));
- (id<AddressLibKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseWrapper")))
@interface AddressLibDatabaseWrapper : AddressLibBase
- (instancetype)initWithInstance:(id<AddressLibAddressDatabase> _Nullable)instance __attribute__((swift_name("init(instance:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<AddressLibAddressDatabase> _Nullable instance __attribute__((swift_name("instance")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol AddressLibKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<AddressLibKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(AddressLibKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CFlow")))
@interface AddressLibCFlow<T> : AddressLibBase <AddressLibKotlinx_coroutines_coreFlow>
- (instancetype)initWithOrigin:(id<AddressLibKotlinx_coroutines_coreFlow>)origin __attribute__((swift_name("init(origin:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<AddressLibKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(AddressLibKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<AddressLibKtor_ioCloseable>)watchBlock:(void (^)(T _Nullable))block __attribute__((swift_name("watch(block:)")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol AddressLibKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface AddressLibKotlinEnum<E> : AddressLibBase <AddressLibKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AddressLibKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CrudState")))
@interface AddressLibCrudState : AddressLibKotlinEnum<AddressLibCrudState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AddressLibCrudState *synced __attribute__((swift_name("synced")));
@property (class, readonly) AddressLibCrudState *create __attribute__((swift_name("create")));
@property (class, readonly) AddressLibCrudState *update __attribute__((swift_name("update")));
@property (class, readonly) AddressLibCrudState *delete_ __attribute__((swift_name("delete_")));
+ (AddressLibKotlinArray<AddressLibCrudState *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Repo")))
@protocol AddressLibRepo
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)createAddressAddress:(AddressLibAddress *)address completionHandler:(void (^)(AddressLibKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createAddress(address:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteAddressId:(int64_t)id completionHandler:(void (^)(AddressLibKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteAddress(id:completionHandler:)")));
- (AddressLibCFlow<NSArray<AddressLibAddress *> *> * _Nullable)fetchAddressFlow __attribute__((swift_name("fetchAddressFlow()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchAddressesWithCompletionHandler:(void (^)(AddressLibKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchAddresses(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)makeDefaultId:(int64_t)id completionHandler:(void (^)(AddressLibKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("makeDefault(id:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeDefaultWithCompletionHandler:(void (^)(AddressLibKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeDefault(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)syncWithCompletionHandler:(void (^)(AddressLibKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sync(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateAddressAddress:(AddressLibAddress *)address completionHandler:(void (^)(AddressLibKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateAddress(address:completionHandler:)")));
@end;

__attribute__((swift_name("Response")))
@interface AddressLibResponse<T> : AddressLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseFailed")))
@interface AddressLibResponseFailed<T> : AddressLibResponse<T>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseSuccess")))
@interface AddressLibResponseSuccess<T> : AddressLibResponse<T>
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (T _Nullable)component1 __attribute__((swift_name("component1()")));
- (AddressLibResponseSuccess<T> *)doCopyData:(T _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Address")))
@interface AddressLibAddress : AddressLibBase
- (instancetype)initWithId:(int64_t)id firstname:(NSString * _Nullable)firstname lastname:(NSString * _Nullable)lastname address1:(NSString *)address1 address2:(NSString * _Nullable)address2 city:(NSString *)city zipcode:(NSString *)zipcode phone:(NSString * _Nullable)phone state_name:(NSString * _Nullable)state_name alternative_phone:(NSString * _Nullable)alternative_phone company:(NSString * _Nullable)company state_id:(int64_t)state_id country_id:(int64_t)country_id crud_state:(AddressLibCrudState * _Nullable)crud_state is_default:(AddressLibBoolean * _Nullable)is_default __attribute__((swift_name("init(id:firstname:lastname:address1:address2:city:zipcode:phone:state_name:alternative_phone:company:state_id:country_id:crud_state:is_default:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (int64_t)component12 __attribute__((swift_name("component12()")));
- (int64_t)component13 __attribute__((swift_name("component13()")));
- (AddressLibCrudState * _Nullable)component14 __attribute__((swift_name("component14()")));
- (AddressLibBoolean * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (AddressLibAddress *)doCopyId:(int64_t)id firstname:(NSString * _Nullable)firstname lastname:(NSString * _Nullable)lastname address1:(NSString *)address1 address2:(NSString * _Nullable)address2 city:(NSString *)city zipcode:(NSString *)zipcode phone:(NSString * _Nullable)phone state_name:(NSString * _Nullable)state_name alternative_phone:(NSString * _Nullable)alternative_phone company:(NSString * _Nullable)company state_id:(int64_t)state_id country_id:(int64_t)country_id crud_state:(AddressLibCrudState * _Nullable)crud_state is_default:(AddressLibBoolean * _Nullable)is_default __attribute__((swift_name("doCopy(id:firstname:lastname:address1:address2:city:zipcode:phone:state_name:alternative_phone:company:state_id:country_id:crud_state:is_default:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *address1 __attribute__((swift_name("address1")));
@property (readonly) NSString * _Nullable address2 __attribute__((swift_name("address2")));
@property (readonly) NSString * _Nullable alternative_phone __attribute__((swift_name("alternative_phone")));
@property (readonly) NSString *city __attribute__((swift_name("city")));
@property (readonly) NSString * _Nullable company __attribute__((swift_name("company")));
@property (readonly) int64_t country_id __attribute__((swift_name("country_id")));
@property (readonly) AddressLibCrudState * _Nullable crud_state __attribute__((swift_name("crud_state")));
@property (readonly) NSString * _Nullable firstname __attribute__((swift_name("firstname")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) AddressLibBoolean * _Nullable is_default __attribute__((swift_name("is_default")));
@property (readonly) NSString * _Nullable lastname __attribute__((swift_name("lastname")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));
@property (readonly) int64_t state_id __attribute__((swift_name("state_id")));
@property (readonly) NSString * _Nullable state_name __attribute__((swift_name("state_name")));
@property (readonly) NSString *zipcode __attribute__((swift_name("zipcode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Address.Adapter")))
@interface AddressLibAddressAdapter : AddressLibBase
- (instancetype)initWithCrud_stateAdapter:(id<AddressLibRuntimeColumnAdapter>)crud_stateAdapter __attribute__((swift_name("init(crud_stateAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<AddressLibRuntimeColumnAdapter> crud_stateAdapter __attribute__((swift_name("crud_stateAdapter")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol AddressLibRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<AddressLibRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<AddressLibRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("AddressDatabase")))
@protocol AddressLibAddressDatabase <AddressLibRuntimeTransacter>
@required
@property (readonly) id<AddressLibAddressDatabaseQueries> addressDatabaseQueries __attribute__((swift_name("addressDatabaseQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddressDatabaseCompanion")))
@interface AddressLibAddressDatabaseCompanion : AddressLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AddressLibAddressDatabaseCompanion *shared __attribute__((swift_name("shared")));
- (id<AddressLibAddressDatabase>)invokeDriver:(id<AddressLibRuntimeSqlDriver>)driver AddressAdapter:(AddressLibAddressAdapter *)AddressAdapter __attribute__((swift_name("invoke(driver:AddressAdapter:)")));
@property (readonly) id<AddressLibRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((swift_name("AddressDatabaseQueries")))
@protocol AddressLibAddressDatabaseQueries <AddressLibRuntimeTransacter>
@required
- (void)deleteAddressByIdId:(int64_t)id __attribute__((swift_name("deleteAddressById(id:)")));
- (void)deleteAllAddressWithStatesCrudStates:(id)crudStates __attribute__((swift_name("deleteAllAddressWithStates(crudStates:)")));
- (AddressLibRuntimeQuery<AddressLibLong *> *)fetchLatestLocalId __attribute__((swift_name("fetchLatestLocalId()")));
- (AddressLibRuntimeQuery<AddressLibAddress *> *)getAllAddressCrudStates:(id)crudStates __attribute__((swift_name("getAllAddress(crudStates:)")));
- (AddressLibRuntimeQuery<id> *)getAllAddressCrudStates:(id)crudStates mapper:(id (^)(AddressLibLong *, NSString * _Nullable, NSString * _Nullable, NSString *, NSString * _Nullable, NSString *, NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, AddressLibLong *, AddressLibLong *, AddressLibCrudState * _Nullable, AddressLibBoolean * _Nullable))mapper __attribute__((swift_name("getAllAddress(crudStates:mapper:)")));
- (void)insertLocalIdId:(AddressLibLong * _Nullable)id __attribute__((swift_name("insertLocalId(id:)")));
- (void)insertOrReplaceId:(AddressLibLong * _Nullable)id firstname:(NSString * _Nullable)firstname lastname:(NSString * _Nullable)lastname address1:(NSString *)address1 address2:(NSString * _Nullable)address2 city:(NSString *)city zipcode:(NSString *)zipcode phone:(NSString * _Nullable)phone state_name:(NSString * _Nullable)state_name alternative_phone:(NSString * _Nullable)alternative_phone company:(NSString * _Nullable)company state_id:(int64_t)state_id country_id:(int64_t)country_id crud_state:(AddressLibCrudState * _Nullable)crud_state is_default:(AddressLibBoolean * _Nullable)is_default __attribute__((swift_name("insertOrReplace(id:firstname:lastname:address1:address2:city:zipcode:phone:state_name:alternative_phone:company:state_id:country_id:crud_state:is_default:)")));
- (void)removeCurrentDefault __attribute__((swift_name("removeCurrentDefault()")));
- (void)setCrudStateCrudState:(AddressLibCrudState * _Nullable)crudState id:(int64_t)id __attribute__((swift_name("setCrudState(crudState:id:)")));
- (void)setDefaultId:(int64_t)id __attribute__((swift_name("setDefault(id:)")));
- (void)updateIdNewId:(int64_t)newId oldId:(int64_t)oldId __attribute__((swift_name("updateId(newId:oldId:)")));
- (void)updateLocalIdNewId:(int64_t)newId __attribute__((swift_name("updateLocalId(newId:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalAddressId")))
@interface AddressLibLocalAddressId : AddressLibBase
- (instancetype)initWithId:(int64_t)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (AddressLibLocalAddressId *)doCopyId:(int64_t)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@end;

@interface AddressLibAddress (Extensions)
- (NSString *)toRequestParamsToken:(NSString *)token __attribute__((swift_name("toRequestParams(token:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpectKt")))
@interface AddressLibExpectKt : AddressLibBase
@property (class, readonly) NSString *databaseName __attribute__((swift_name("databaseName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActualKt")))
@interface AddressLibActualKt : AddressLibBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)getDatabaseWrapperWithCompletionHandler:(void (^)(AddressLibDatabaseWrapper * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getDatabaseWrapper(completionHandler:)")));
+ (void)platformModuleBuilder:(id<AddressLibKodein_diDIBuilder>)builder __attribute__((swift_name("platformModule(builder:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KodeinKt")))
@interface AddressLibKodeinKt : AddressLibBase
+ (id<AddressLibKodein_diDI>)doInitKodeinEnableNetworkLogs:(BOOL)enableNetworkLogs appDeclaration:(void (^)(id<AddressLibKodein_diDIBuilder>))appDeclaration __attribute__((swift_name("doInitKodein(enableNetworkLogs:appDeclaration:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)doInitKodeinJSEnableNetworkLogs:(BOOL)enableNetworkLogs appDeclaration:(void (^)(id<AddressLibKodein_diDIBuilder>))appDeclaration completionHandler:(void (^)(id<AddressLibKodein_diDI> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doInitKodeinJS(enableNetworkLogs:appDeclaration:completionHandler:)")));
@property (class) id<AddressLibRepo> _Nullable repo __attribute__((swift_name("repo")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol AddressLibKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<AddressLibKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<AddressLibKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol AddressLibKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<AddressLibKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<AddressLibKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol AddressLibKotlinx_serialization_coreKSerializer <AddressLibKotlinx_serialization_coreSerializationStrategy, AddressLibKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface AddressLibKotlinThrowable : AddressLibBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AddressLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AddressLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (AddressLibKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AddressLibKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface AddressLibKotlinException : AddressLibKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AddressLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AddressLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface AddressLibKotlinRuntimeException : AddressLibKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AddressLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AddressLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface AddressLibKotlinIllegalStateException : AddressLibKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AddressLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AddressLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface AddressLibKotlinCancellationException : AddressLibKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AddressLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AddressLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol AddressLibKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(AddressLibKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface AddressLibKotlinUnit : AddressLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AddressLibKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol AddressLibKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface AddressLibKotlinEnumCompanion : AddressLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AddressLibKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface AddressLibKotlinArray<T> : AddressLibBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(AddressLibInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<AddressLibKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("RuntimeColumnAdapter")))
@protocol AddressLibRuntimeColumnAdapter
@required
- (id)decodeDatabaseValue:(id _Nullable)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (id _Nullable)encodeValue:(id)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol AddressLibRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol AddressLibRuntimeTransactionWithoutReturn <AddressLibRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<AddressLibRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol AddressLibRuntimeTransactionWithReturn <AddressLibRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<AddressLibRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol AddressLibRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol AddressLibRuntimeSqlDriver <AddressLibRuntimeCloseable>
@required
- (AddressLibRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(AddressLibInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<AddressLibRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<AddressLibRuntimeSqlCursor>)executeQueryIdentifier:(AddressLibInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<AddressLibRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (AddressLibRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol AddressLibRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<AddressLibRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<AddressLibRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface AddressLibRuntimeQuery<__covariant RowType> : AddressLibBase
- (instancetype)initWithQueries:(NSMutableArray<AddressLibRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<AddressLibRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<AddressLibRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<AddressLibRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<AddressLibRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<AddressLibRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("Kodein_diDIBindBuilder")))
@protocol AddressLibKodein_diDIBindBuilder
@required
@property (readonly) id<AddressLibKodein_typeTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) BOOL explicitContext __attribute__((swift_name("explicitContext")));
@end;

__attribute__((swift_name("Kodein_diDIBindBuilderWithScope")))
@protocol AddressLibKodein_diDIBindBuilderWithScope <AddressLibKodein_diDIBindBuilder>
@required
@property (readonly) id<AddressLibKodein_diScope> scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Kodein_diDIBuilder")))
@protocol AddressLibKodein_diDIBuilder <AddressLibKodein_diDIBindBuilder, AddressLibKodein_diDIBindBuilderWithScope>
@required
- (id<AddressLibKodein_diDIBuilderDirectBinder>)BindTag:(id _Nullable)tag overrides:(AddressLibBoolean * _Nullable)overrides __attribute__((swift_name("Bind(tag:overrides:)")));
- (void)BindTag:(id _Nullable)tag overrides:(AddressLibBoolean * _Nullable)overrides binding:(id<AddressLibKodein_diDIBinding>)binding __attribute__((swift_name("Bind(tag:overrides:binding:)")));
- (id<AddressLibKodein_diDIBuilderTypeBinder>)BindType:(id<AddressLibKodein_typeTypeToken>)type tag:(id _Nullable)tag overrides:(AddressLibBoolean * _Nullable)overrides __attribute__((swift_name("Bind(type:tag:overrides:)")));
- (void)BindSetTag:(id _Nullable)tag overrides:(AddressLibBoolean * _Nullable)overrides binding:(id<AddressLibKodein_diDIBinding>)binding __attribute__((swift_name("BindSet(tag:overrides:binding:)")));
- (void)RegisterContextTranslatorTranslator:(id<AddressLibKodein_diContextTranslator>)translator __attribute__((swift_name("RegisterContextTranslator(translator:)")));
- (id<AddressLibKodein_diDIBuilderConstantBinder>)constantTag:(id)tag overrides:(AddressLibBoolean * _Nullable)overrides __attribute__((swift_name("constant(tag:overrides:)")));
- (void)importModule:(AddressLibKodein_diDIModule *)module allowOverride:(BOOL)allowOverride __attribute__((swift_name("import(module:allowOverride:)")));
- (void)importAllModules:(AddressLibKotlinArray<AddressLibKodein_diDIModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("importAll(modules:allowOverride:)")));
- (void)importAllModules:(id)modules allowOverride_:(BOOL)allowOverride __attribute__((swift_name("importAll(modules:allowOverride_:)")));
- (void)importOnceModule:(AddressLibKodein_diDIModule *)module allowOverride:(BOOL)allowOverride __attribute__((swift_name("importOnce(module:allowOverride:)")));
- (void)onReadyCb:(void (^)(id<AddressLibKodein_diDirectDI>))cb __attribute__((swift_name("onReady(cb:)")));
@property (readonly) id<AddressLibKodein_diDIContainerBuilder> containerBuilder __attribute__((swift_name("containerBuilder")));
@end;

__attribute__((swift_name("Kodein_diDIAware")))
@protocol AddressLibKodein_diDIAware
@required
@property (readonly) id<AddressLibKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) id<AddressLibKodein_diDIContext> diContext __attribute__((swift_name("diContext")));
@property (readonly) AddressLibKodein_diDITrigger * _Nullable diTrigger __attribute__((swift_name("diTrigger")));
@end;

__attribute__((swift_name("Kodein_diDI")))
@protocol AddressLibKodein_diDI <AddressLibKodein_diDIAware>
@required
@property (readonly) id<AddressLibKodein_diDIContainer> container __attribute__((swift_name("container")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol AddressLibKotlinx_serialization_coreEncoder
@required
- (id<AddressLibKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<AddressLibKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<AddressLibKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<AddressLibKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<AddressLibKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) AddressLibKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol AddressLibKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<AddressLibKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<AddressLibKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<AddressLibKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) AddressLibKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol AddressLibKotlinx_serialization_coreDecoder
@required
- (id<AddressLibKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<AddressLibKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (AddressLibKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<AddressLibKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<AddressLibKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) AddressLibKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol AddressLibKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface AddressLibRuntimeTransacterTransaction : AddressLibBase <AddressLibRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) AddressLibRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol AddressLibRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(AddressLibKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(AddressLibDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(AddressLibLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol AddressLibRuntimeSqlCursor <AddressLibRuntimeCloseable>
@required
- (AddressLibKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (AddressLibDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (AddressLibLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol AddressLibRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("Kodein_diDIBuilderDirectBinder")))
@protocol AddressLibKodein_diDIBuilderDirectBinder
@required
- (void)fromBinding:(id<AddressLibKodein_diDIBinding>)binding __attribute__((swift_name("from(binding:)"))) __attribute__((deprecated("'bind() fron [BINDING]' might be replace by 'bind { [BINDING] }' (This will be remove in Kodein-DI 8.0)")));
@end;

__attribute__((swift_name("Kodein_diBinding")))
@protocol AddressLibKodein_diBinding
@required
- (id (^)(id _Nullable))getFactoryKey:(AddressLibKodein_diDIKey<id, id, id> *)key di:(id<AddressLibKodein_diBindingDI>)di __attribute__((swift_name("getFactory(key:di:)")));
@end;

__attribute__((swift_name("Kodein_diDIBinding")))
@protocol AddressLibKodein_diDIBinding <AddressLibKodein_diBinding>
@required
- (NSString *)factoryFullName __attribute__((swift_name("factoryFullName()")));
- (NSString *)factoryName __attribute__((swift_name("factoryName()")));
@property (readonly) id<AddressLibKodein_typeTypeToken> argType __attribute__((swift_name("argType")));
@property (readonly) id<AddressLibKodein_typeTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) id<AddressLibKodein_diDIBindingCopier> _Nullable copier __attribute__((swift_name("copier")));
@property (readonly) id<AddressLibKodein_typeTypeToken> createdType __attribute__((swift_name("createdType")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) id<AddressLibKodein_diScope> _Nullable scope __attribute__((swift_name("scope")));
@property (readonly) BOOL supportSubTypes __attribute__((swift_name("supportSubTypes")));
@end;

__attribute__((swift_name("Kodein_diDIBuilderTypeBinder")))
@protocol AddressLibKodein_diDIBuilderTypeBinder
@required
- (void)withBinding:(id<AddressLibKodein_diDIBinding>)binding __attribute__((swift_name("with(binding:)")));
@end;

__attribute__((swift_name("Kodein_typeTypeToken")))
@protocol AddressLibKodein_typeTypeToken
@required
- (AddressLibKotlinArray<id<AddressLibKodein_typeTypeToken>> *)getGenericParameters __attribute__((swift_name("getGenericParameters()")));
- (id<AddressLibKodein_typeTypeToken>)getRaw __attribute__((swift_name("getRaw()")));
- (NSArray<id<AddressLibKodein_typeTypeToken>> *)getSuper __attribute__((swift_name("getSuper()")));
- (BOOL)isAssignableFromTypeToken:(id<AddressLibKodein_typeTypeToken>)typeToken __attribute__((swift_name("isAssignableFrom(typeToken:)")));
- (BOOL)isGeneric __attribute__((swift_name("isGeneric()")));
- (BOOL)isWildcard __attribute__((swift_name("isWildcard()")));
- (NSString *)qualifiedDispString __attribute__((swift_name("qualifiedDispString()")));
- (NSString *)qualifiedErasedDispString __attribute__((swift_name("qualifiedErasedDispString()")));
- (NSString *)simpleDispString __attribute__((swift_name("simpleDispString()")));
- (NSString *)simpleErasedDispString __attribute__((swift_name("simpleErasedDispString()")));
@end;

__attribute__((swift_name("Kodein_diContextTranslator")))
@protocol AddressLibKodein_diContextTranslator
@required
- (id _Nullable)translateDi:(id<AddressLibKodein_diDirectDI>)di ctx:(id)ctx __attribute__((swift_name("translate(di:ctx:)")));
@property (readonly) id<AddressLibKodein_typeTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) id<AddressLibKodein_typeTypeToken> scopeType __attribute__((swift_name("scopeType")));
@end;

__attribute__((swift_name("Kodein_diDIBuilderConstantBinder")))
@protocol AddressLibKodein_diDIBuilderConstantBinder
@required
- (void)WithValueType:(id<AddressLibKodein_typeTypeToken>)valueType value:(id)value __attribute__((swift_name("With(valueType:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIModule")))
@interface AddressLibKodein_diDIModule : AddressLibBase
- (instancetype)initWithAllowSilentOverride:(BOOL)allowSilentOverride init:(void (^)(id<AddressLibKodein_diDIBuilder>))init __attribute__((swift_name("init(allowSilentOverride:init:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("You should name your modules, for debug purposes.")));
- (instancetype)initWithName:(NSString *)name allowSilentOverride:(BOOL)allowSilentOverride prefix:(NSString *)prefix init:(void (^)(id<AddressLibKodein_diDIBuilder>))init __attribute__((swift_name("init(name:allowSilentOverride:prefix:init:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (void (^)(id<AddressLibKodein_diDIBuilder>))component4 __attribute__((swift_name("component4()")));
- (AddressLibKodein_diDIModule *)doCopyName:(NSString *)name allowSilentOverride:(BOOL)allowSilentOverride prefix:(NSString *)prefix init:(void (^)(id<AddressLibKodein_diDIBuilder>))init __attribute__((swift_name("doCopy(name:allowSilentOverride:prefix:init:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSilentOverride __attribute__((swift_name("allowSilentOverride")));
@property (readonly, getter=doInit) void (^init)(id<AddressLibKodein_diDIBuilder>) __attribute__((swift_name("init")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *prefix __attribute__((swift_name("prefix")));
@end;

__attribute__((swift_name("Kodein_diDirectDIAware")))
@protocol AddressLibKodein_diDirectDIAware
@required
@property (readonly) id<AddressLibKodein_diDirectDI> directDI __attribute__((swift_name("directDI")));
@end;

__attribute__((swift_name("Kodein_diDirectDIBase")))
@protocol AddressLibKodein_diDirectDIBase <AddressLibKodein_diDirectDIAware>
@required
- (id (^)(id _Nullable))FactoryArgType:(id<AddressLibKodein_typeTypeToken>)argType type:(id<AddressLibKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Factory(argType:type:tag:)")));
- (id (^ _Nullable)(id _Nullable))FactoryOrNullArgType:(id<AddressLibKodein_typeTypeToken>)argType type:(id<AddressLibKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("FactoryOrNull(argType:type:tag:)")));
- (id)InstanceType:(id<AddressLibKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Instance(type:tag:)")));
- (id)InstanceArgType:(id<AddressLibKodein_typeTypeToken>)argType type:(id<AddressLibKodein_typeTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("Instance(argType:type:tag:arg:)")));
- (id _Nullable)InstanceOrNullType:(id<AddressLibKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("InstanceOrNull(type:tag:)")));
- (id _Nullable)InstanceOrNullArgType:(id<AddressLibKodein_typeTypeToken>)argType type:(id<AddressLibKodein_typeTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("InstanceOrNull(argType:type:tag:arg:)")));
- (id<AddressLibKodein_diDirectDI>)OnContext:(id<AddressLibKodein_diDIContext>)context __attribute__((swift_name("On(context:)")));
- (id (^)(void))ProviderType:(id<AddressLibKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Provider(type:tag:)")));
- (id (^)(void))ProviderArgType:(id<AddressLibKodein_typeTypeToken>)argType type:(id<AddressLibKodein_typeTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("Provider(argType:type:tag:arg:)")));
- (id (^ _Nullable)(void))ProviderOrNullType:(id<AddressLibKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("ProviderOrNull(type:tag:)")));
- (id (^ _Nullable)(void))ProviderOrNullArgType:(id<AddressLibKodein_typeTypeToken>)argType type:(id<AddressLibKodein_typeTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("ProviderOrNull(argType:type:tag:arg:)")));
@property (readonly) id<AddressLibKodein_diDIContainer> container __attribute__((swift_name("container")));
@property (readonly) id<AddressLibKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) id<AddressLibKodein_diDI> lazy __attribute__((swift_name("lazy")));
@end;

__attribute__((swift_name("Kodein_diDirectDI")))
@protocol AddressLibKodein_diDirectDI <AddressLibKodein_diDirectDIBase>
@required
@end;

__attribute__((swift_name("Kodein_diDIContainerBuilder")))
@protocol AddressLibKodein_diDIContainerBuilder
@required
- (void)bindKey:(AddressLibKodein_diDIKey<id, id, id> *)key binding:(id<AddressLibKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule overrides:(AddressLibBoolean * _Nullable)overrides __attribute__((swift_name("bind(key:binding:fromModule:overrides:)")));
- (void)extendContainer:(id<AddressLibKodein_diDIContainer>)container allowOverride:(BOOL)allowOverride copy:(NSSet<AddressLibKodein_diDIKey<id, id, id> *> *)copy __attribute__((swift_name("extend(container:allowOverride:copy:)")));
- (void)onReadyCb:(void (^)(id<AddressLibKodein_diDirectDI>))cb __attribute__((swift_name("onReady(cb:)")));
- (void)registerContextTranslatorTranslator:(id<AddressLibKodein_diContextTranslator>)translator __attribute__((swift_name("registerContextTranslator(translator:)")));
- (id<AddressLibKodein_diDIContainerBuilder>)subBuilderAllowOverride:(BOOL)allowOverride silentOverride:(BOOL)silentOverride __attribute__((swift_name("subBuilder(allowOverride:silentOverride:)")));
@end;

__attribute__((swift_name("Kodein_diScope")))
@protocol AddressLibKodein_diScope
@required
- (AddressLibKodein_diScopeRegistry *)getRegistryContext:(id _Nullable)context __attribute__((swift_name("getRegistry(context:)")));
@end;

__attribute__((swift_name("Kodein_diDIContainer")))
@protocol AddressLibKodein_diDIContainer
@required
- (NSArray<id (^)(id _Nullable)> *)allFactoriesKey:(AddressLibKodein_diDIKey<id, id, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allFactories(key:context:overrideLevel:)")));
- (NSArray<id (^)(void)> *)allProvidersKey:(AddressLibKodein_diDIKey<id, AddressLibKotlinUnit *, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allProviders(key:context:overrideLevel:)")));
- (id (^)(id _Nullable))factoryKey:(AddressLibKodein_diDIKey<id, id, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factory(key:context:overrideLevel:)")));
- (id (^ _Nullable)(id _Nullable))factoryOrNullKey:(AddressLibKodein_diDIKey<id, id, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factoryOrNull(key:context:overrideLevel:)")));
- (id (^)(void))providerKey:(AddressLibKodein_diDIKey<id, AddressLibKotlinUnit *, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("provider(key:context:overrideLevel:)")));
- (id (^ _Nullable)(void))providerOrNullKey:(AddressLibKodein_diDIKey<id, AddressLibKotlinUnit *, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("providerOrNull(key:context:overrideLevel:)")));
@property (readonly) id<AddressLibKodein_diDITree> tree __attribute__((swift_name("tree")));
@end;

__attribute__((swift_name("Kodein_diDIContext")))
@protocol AddressLibKodein_diDIContext
@required
@property (readonly) id<AddressLibKodein_typeTypeToken> type __attribute__((swift_name("type")));
@property (readonly) id value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDITrigger")))
@interface AddressLibKodein_diDITrigger : AddressLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@property (readonly) NSMutableArray<id<AddressLibKotlinLazy>> *properties __attribute__((swift_name("properties")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol AddressLibKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<AddressLibKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AddressLibKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AddressLibKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) AddressLibKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface AddressLibKotlinx_serialization_coreSerializersModule : AddressLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<AddressLibKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<AddressLibKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<AddressLibKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<AddressLibKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<AddressLibKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AddressLibKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<AddressLibKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AddressLibKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol AddressLibKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface AddressLibKotlinx_serialization_coreSerialKind : AddressLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol AddressLibKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<AddressLibKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AddressLibKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AddressLibKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<AddressLibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) AddressLibKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface AddressLibKotlinNothing : AddressLibBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface AddressLibKotlinByteArray : AddressLibBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(AddressLibByte *(^)(AddressLibInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (AddressLibKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kodein_diDIBindingCopier")))
@protocol AddressLibKodein_diDIBindingCopier
@required
- (id<AddressLibKodein_diDIBinding>)doCopyBuilder:(id<AddressLibKodein_diDIContainerBuilder>)builder __attribute__((swift_name("doCopy(builder:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIKey")))
@interface AddressLibKodein_diDIKey<__contravariant C, __contravariant A, __covariant T> : AddressLibBase
- (instancetype)initWithContextType:(id<AddressLibKodein_typeTypeToken>)contextType argType:(id<AddressLibKodein_typeTypeToken>)argType type:(id<AddressLibKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (id<AddressLibKodein_typeTypeToken>)component1 __attribute__((swift_name("component1()")));
- (id<AddressLibKodein_typeTypeToken>)component2 __attribute__((swift_name("component2()")));
- (id<AddressLibKodein_typeTypeToken>)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (AddressLibKodein_diDIKey<C, A, T> *)doCopyContextType:(id<AddressLibKodein_typeTypeToken>)contextType argType:(id<AddressLibKodein_typeTypeToken>)argType type:(id<AddressLibKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("doCopy(contextType:argType:type:tag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<AddressLibKodein_typeTypeToken> argType __attribute__((swift_name("argType")));
@property (readonly) NSString *bindDescription __attribute__((swift_name("bindDescription")));
@property (readonly) NSString *bindFullDescription __attribute__((swift_name("bindFullDescription")));
@property (readonly) id<AddressLibKodein_typeTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) NSString *internalDescription __attribute__((swift_name("internalDescription")));
@property (readonly) id _Nullable tag __attribute__((swift_name("tag")));
@property (readonly) id<AddressLibKodein_typeTypeToken> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Kodein_diWithContext")))
@protocol AddressLibKodein_diWithContext
@required
@property (readonly) id context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kodein_diBindingDI")))
@protocol AddressLibKodein_diBindingDI <AddressLibKodein_diDirectDI, AddressLibKodein_diWithContext>
@required
- (id<AddressLibKodein_diBindingDI>)onErasedContext __attribute__((swift_name("onErasedContext()")));
- (id (^)(id _Nullable))overriddenFactory __attribute__((swift_name("overriddenFactory()")));
- (id (^ _Nullable)(id _Nullable))overriddenFactoryOrNull __attribute__((swift_name("overriddenFactoryOrNull()")));
@end;

__attribute__((swift_name("Kodein_diScopeCloseable")))
@protocol AddressLibKodein_diScopeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Kodein_diScopeRegistry")))
@interface AddressLibKodein_diScopeRegistry : AddressLibBase <AddressLibKodein_diScopeCloseable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (id)getOrCreateKey:(id)key sync:(BOOL)sync creator:(AddressLibKodein_diReference<id> *(^)(void))creator __attribute__((swift_name("getOrCreate(key:sync:creator:)")));
- (id _Nullable (^ _Nullable)(void))getOrNullKey:(id)key __attribute__((swift_name("getOrNull(key:)")));
- (void)removeKey:(id)key __attribute__((swift_name("remove(key:)")));
- (id)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kodein_diDITree")))
@protocol AddressLibKodein_diDITree
@required
- (NSArray<AddressLibKotlinTriple<AddressLibKodein_diDIKey<id, id, id> *, AddressLibKodein_diDIDefinition<id, id, id> *, id<AddressLibKodein_diContextTranslator>> *> *)findKey:(AddressLibKodein_diDIKey<id, id, id> *)key overrideLevel:(int32_t)overrideLevel all:(BOOL)all __attribute__((swift_name("find(key:overrideLevel:all:)")));
- (NSArray<AddressLibKotlinTriple<AddressLibKodein_diDIKey<id, id, id> *, NSArray<AddressLibKodein_diDIDefinition<id, id, id> *> *, id<AddressLibKodein_diContextTranslator>> *> *)findSearch:(AddressLibKodein_diSearchSpecs *)search __attribute__((swift_name("find(search:)")));
- (AddressLibKotlinTriple<AddressLibKodein_diDIKey<id, id, id> *, NSArray<AddressLibKodein_diDIDefinition<id, id, id> *> *, id<AddressLibKodein_diContextTranslator>> * _Nullable)getKey:(AddressLibKodein_diDIKey<id, id, id> *)key __attribute__((swift_name("get(key:)")));
@property (readonly) NSDictionary<AddressLibKodein_diDIKey<id, id, id> *, NSArray<AddressLibKodein_diDIDefinition<id, id, id> *> *> *bindings __attribute__((swift_name("bindings")));
@property (readonly) NSArray<id<AddressLibKodein_diExternalSource>> *externalSources __attribute__((swift_name("externalSources")));
@property (readonly) NSArray<id<AddressLibKodein_diContextTranslator>> *registeredTranslators __attribute__((swift_name("registeredTranslators")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol AddressLibKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol AddressLibKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<AddressLibKotlinKClass>)kClass provider:(id<AddressLibKotlinx_serialization_coreKSerializer> (^)(NSArray<id<AddressLibKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<AddressLibKotlinKClass>)kClass serializer:(id<AddressLibKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<AddressLibKotlinKClass>)baseClass actualClass:(id<AddressLibKotlinKClass>)actualClass actualSerializer:(id<AddressLibKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<AddressLibKotlinKClass>)baseClass defaultSerializerProvider:(id<AddressLibKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol AddressLibKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol AddressLibKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol AddressLibKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol AddressLibKotlinKClass <AddressLibKotlinKDeclarationContainer, AddressLibKotlinKAnnotatedElement, AddressLibKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface AddressLibKotlinByteIterator : AddressLibBase <AddressLibKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AddressLibByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diReference")))
@interface AddressLibKodein_diReference<__covariant T> : AddressLibBase
- (instancetype)initWithCurrent:(T)current next:(T _Nullable (^)(void))next __attribute__((swift_name("init(current:next:)"))) __attribute__((objc_designated_initializer));
- (T)component1 __attribute__((swift_name("component1()")));
- (T _Nullable (^)(void))component2 __attribute__((swift_name("component2()")));
- (AddressLibKodein_diReference<T> *)doCopyCurrent:(T)current next:(T _Nullable (^)(void))next __attribute__((swift_name("doCopy(current:next:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T current __attribute__((swift_name("current")));
@property (readonly) T _Nullable (^next)(void) __attribute__((swift_name("next")));
@end;

__attribute__((swift_name("Kodein_diDIDefining")))
@interface AddressLibKodein_diDIDefining<C, A, T> : AddressLibBase
- (instancetype)initWithBinding:(id<AddressLibKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<AddressLibKodein_diDIBinding> binding __attribute__((swift_name("binding")));
@property (readonly) NSString * _Nullable fromModule __attribute__((swift_name("fromModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIDefinition")))
@interface AddressLibKodein_diDIDefinition<C, A, T> : AddressLibKodein_diDIDefining<C, A, T>
- (instancetype)initWithBinding:(id<AddressLibKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule tree:(id<AddressLibKodein_diDITree>)tree __attribute__((swift_name("init(binding:fromModule:tree:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBinding:(id<AddressLibKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id<AddressLibKodein_diDITree> tree __attribute__((swift_name("tree")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinTriple")))
@interface AddressLibKotlinTriple<__covariant A, __covariant B, __covariant C> : AddressLibBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("init(first:second:third:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (C _Nullable)component3 __attribute__((swift_name("component3()")));
- (AddressLibKotlinTriple<A, B, C> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("doCopy(first:second:third:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@property (readonly) C _Nullable third __attribute__((swift_name("third")));
@end;

__attribute__((swift_name("Kodein_diSearchSpecs")))
@interface AddressLibKodein_diSearchSpecs : AddressLibBase
- (instancetype)initWithContextType:(id<AddressLibKodein_typeTypeToken> _Nullable)contextType argType:(id<AddressLibKodein_typeTypeToken> _Nullable)argType type:(id<AddressLibKodein_typeTypeToken> _Nullable)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property id<AddressLibKodein_typeTypeToken> _Nullable argType __attribute__((swift_name("argType")));
@property id<AddressLibKodein_typeTypeToken> _Nullable contextType __attribute__((swift_name("contextType")));
@property id _Nullable tag __attribute__((swift_name("tag")));
@property id<AddressLibKodein_typeTypeToken> _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Kodein_diExternalSource")))
@protocol AddressLibKodein_diExternalSource
@required
- (id (^ _Nullable)(id _Nullable))getFactoryDi:(id<AddressLibKodein_diBindingDI>)di key:(AddressLibKodein_diDIKey<id, id, id> *)key __attribute__((swift_name("getFactory(di:key:)")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
