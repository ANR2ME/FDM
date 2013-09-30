/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_HTMLPropertiesCollectionBinding_h__
#define mozilla_dom_HTMLPropertiesCollectionBinding_h__

#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/DOMJSClass.h"
#include "mozilla/dom/DOMJSProxyHandler.h"

class XPCWrappedNativeScope;
namespace mozilla {
namespace dom {

class HTMLPropertiesCollection;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

class PropertyNodeList;

} // namespace dom
} // namespace mozilla


namespace mozilla {
namespace dom {

template <>
struct PrototypeTraits<prototypes::id::HTMLPropertiesCollection>
{
  enum
  {
    Depth = 1
  };
  typedef mozilla::dom::HTMLPropertiesCollection NativeType;
};
template <>
struct PrototypeTraits<prototypes::id::PropertyNodeList>
{
  enum
  {
    Depth = 1
  };
  typedef mozilla::dom::PropertyNodeList NativeType;
};
template <>
struct PrototypeIDMap<mozilla::dom::HTMLPropertiesCollection>
{
  enum
  {
    PrototypeID = prototypes::id::HTMLPropertiesCollection
  };
};
template <>
struct PrototypeIDMap<mozilla::dom::PropertyNodeList>
{
  enum
  {
    PrototypeID = prototypes::id::PropertyNodeList
  };
};
} // namespace dom
} // namespace mozilla


namespace mozilla {
namespace dom {

namespace HTMLPropertiesCollectionBinding {

  extern const NativePropertyHooks sNativePropertyHooks;

  void
  CreateInterfaceObjects(JSContext* aCx, JSObject* aGlobal, JSObject** protoAndIfaceArray);

  inline JSObject* GetProtoObject(JSContext* aCx, JSObject* aGlobal)
  {

    /* Get the interface prototype object for this class.  This will create the
       object as needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return NULL;
    }
    /* Check to see whether the interface objects are already installed */
    JSObject** protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    JSObject* cachedObject = protoAndIfaceArray[prototypes::id::HTMLPropertiesCollection];
    if (!cachedObject) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
      cachedObject = protoAndIfaceArray[prototypes::id::HTMLPropertiesCollection];
    }

    /* cachedObject might _still_ be null, but that's OK */
    return cachedObject;
  }

  inline JSObject* GetConstructorObject(JSContext* aCx, JSObject* aGlobal)
  {

    /* Get the interface object for this class.  This will create the object as
       needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return NULL;
    }
    /* Check to see whether the interface objects are already installed */
    JSObject** protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    JSObject* cachedObject = protoAndIfaceArray[constructors::id::HTMLPropertiesCollection];
    if (!cachedObject) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
      cachedObject = protoAndIfaceArray[constructors::id::HTMLPropertiesCollection];
    }

    /* cachedObject might _still_ be null, but that's OK */
    return cachedObject;
  }

  bool
  ResolveOwnProperty(JSContext* cx, JSObject* wrapper_, JSObject* obj, jsid id_, JSPropertyDescriptor* desc, unsigned flags);

  bool
  EnumerateOwnProperties(JSContext* cx, JSObject* wrapper_, JSObject* obj, JS::AutoIdVector& props);

  JSObject*
  DefineDOMInterface(JSContext* aCx, JSObject* aGlobal, jsid id, bool* aEnabled);

  extern const DOMClass Class;

  class DOMProxyHandler : public mozilla::dom::DOMProxyHandler
  {
    inline DOMProxyHandler();

  public:
    bool
    getOwnPropertyDescriptor(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<jsid> id, JSPropertyDescriptor* desc, unsigned flags);

    bool
    getOwnPropertyNames(JSContext* cx, JS::Handle<JSObject*> proxy, JS::AutoIdVector& props);

    bool
    hasOwn(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<jsid> id, bool* bp);

    bool
    get(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<JSObject*> receiver, JS::Handle<jsid> id, JS::MutableHandle<JS::Value> vp);

    JSString*
    obj_toString(JSContext* cx, JS::Handle<JSObject*> proxy);

    bool
    finalizeInBackground(JS::Value priv);

    void
    finalize(JSFreeOp* fop, JSObject* proxy);

    bool
    getElementIfPresent(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<JSObject*> receiver, uint32_t index, JS::MutableHandle<JS::Value> vp, bool* present);

    static DOMProxyHandler*
    getInstance();

    bool
    delete_(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<jsid> id, bool* bp);
  };

  bool
  Is(JSObject* obj);

  JSObject*
  Wrap(JSContext* aCx, JSObject* aScope, mozilla::dom::HTMLPropertiesCollection* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JSObject* aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

} // namespace HTMLPropertiesCollectionBinding



namespace PropertyNodeListBinding {

  extern const NativePropertyHooks sNativePropertyHooks;

  void
  CreateInterfaceObjects(JSContext* aCx, JSObject* aGlobal, JSObject** protoAndIfaceArray);

  inline JSObject* GetProtoObject(JSContext* aCx, JSObject* aGlobal)
  {

    /* Get the interface prototype object for this class.  This will create the
       object as needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return NULL;
    }
    /* Check to see whether the interface objects are already installed */
    JSObject** protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    JSObject* cachedObject = protoAndIfaceArray[prototypes::id::PropertyNodeList];
    if (!cachedObject) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
      cachedObject = protoAndIfaceArray[prototypes::id::PropertyNodeList];
    }

    /* cachedObject might _still_ be null, but that's OK */
    return cachedObject;
  }

  inline JSObject* GetConstructorObject(JSContext* aCx, JSObject* aGlobal)
  {

    /* Get the interface object for this class.  This will create the object as
       needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return NULL;
    }
    /* Check to see whether the interface objects are already installed */
    JSObject** protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    JSObject* cachedObject = protoAndIfaceArray[constructors::id::PropertyNodeList];
    if (!cachedObject) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
      cachedObject = protoAndIfaceArray[constructors::id::PropertyNodeList];
    }

    /* cachedObject might _still_ be null, but that's OK */
    return cachedObject;
  }

  bool
  ResolveOwnProperty(JSContext* cx, JSObject* wrapper_, JSObject* obj, jsid id_, JSPropertyDescriptor* desc, unsigned flags);

  bool
  EnumerateOwnProperties(JSContext* cx, JSObject* wrapper_, JSObject* obj, JS::AutoIdVector& props);

  JSObject*
  DefineDOMInterface(JSContext* aCx, JSObject* aGlobal, jsid id, bool* aEnabled);

  extern const DOMClass Class;

  class DOMProxyHandler : public mozilla::dom::DOMProxyHandler
  {
    inline DOMProxyHandler();

  public:
    bool
    getOwnPropertyDescriptor(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<jsid> id, JSPropertyDescriptor* desc, unsigned flags);

    bool
    getOwnPropertyNames(JSContext* cx, JS::Handle<JSObject*> proxy, JS::AutoIdVector& props);

    bool
    hasOwn(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<jsid> id, bool* bp);

    bool
    get(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<JSObject*> receiver, JS::Handle<jsid> id, JS::MutableHandle<JS::Value> vp);

    JSString*
    obj_toString(JSContext* cx, JS::Handle<JSObject*> proxy);

    bool
    finalizeInBackground(JS::Value priv);

    void
    finalize(JSFreeOp* fop, JSObject* proxy);

    bool
    getElementIfPresent(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<JSObject*> receiver, uint32_t index, JS::MutableHandle<JS::Value> vp, bool* present);

    static DOMProxyHandler*
    getInstance();

    bool
    delete_(JSContext* cx, JS::Handle<JSObject*> proxy, JS::Handle<jsid> id, bool* bp);
  };

  bool
  Is(JSObject* obj);

  JSObject*
  Wrap(JSContext* aCx, JSObject* aScope, mozilla::dom::PropertyNodeList* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JSObject* aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

} // namespace PropertyNodeListBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_HTMLPropertiesCollectionBinding_h__